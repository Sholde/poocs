#include <iostream>
#include <memory>

class Face
{
public:
  int id = 0;
public:
  Face(int id)
  {
    std::cout << "Create Face" << std::endl;
    this->id = id;
  }
  ~Face()
  {
    std::cout << "Delete Face" << std::endl;
  }

  int get_id() { return this->id; }
};

class CellUnique
{
private:
  int number_face = 0;
  std::unique_ptr<Face> face = std::make_unique<Face>(this->number_face);
public:
  CellUnique()
  {
    std::cout << "Create CellUnique" << std::endl;
    this->number_face++;
  }
  ~CellUnique() {
    std::cout << "Delete CellUnique" << std::endl;
  }

  std::unique_ptr<Face> move_face()
  {
    std::cout << "WARNING : face are moved" << std::endl;
    return std::move(this->face);
  }

  int get_face_id() {
    if (this->face.get())
      return this->face->get_id();
    else
      return -1;
  }
};

class CellShared
{
private:
  int number_face = 0;
  std::shared_ptr<Face> face = std::make_shared<Face>(this->number_face);
public:
  CellShared()
  {
    std::cout << "Create CellShared" << std::endl;
    this->number_face++;
  }
  ~CellShared() {
    std::cout << "Delete CellShared" << std::endl;
  }

  int get_face_id() {
    if (this->face.get())
      return this->face->get_id();
    else
      return -1;
  }
};

void test_cell_unique()
{
  CellUnique c;
  std::cout << "c face id : " << c.get_face_id() << std::endl;
  auto move = c.move_face();
  std::cout << "c face id : " << c.get_face_id() << std::endl;
  std::cout << "m face id : " << move->get_id() << std::endl;
}

void test_cell_shared()
{
  CellShared c;
  std::cout << "c face id : " << c.get_face_id() << std::endl;
  auto move = c;
  std::cout << "c face id : " << c.get_face_id() << std::endl;
  std::cout << "m face id : " << move.get_face_id() << std::endl;
}

int main()
{
  test_cell_unique();
  test_cell_shared();
  return 0;
}
