#include <iostream>
#include <string>
#include <memory>

static inline void func_unique_ptr()
{
  std::unique_ptr<std::string> str = std::make_unique<std::string>("alien");
  std::cout << "str address : " << str.get() << std::endl;
  if (str.get())
    std::cout << "str value   : " << *str << std::endl;

  std::cout << std::endl;
  std::cout << "########" << std::endl;
  std::cout << "# Move #" << std::endl;
  std::cout << "########" << std::endl;
  std::cout << std::endl;

  std::unique_ptr<std::string> str_move = std::move(str);
  std::cout << "str address : " << str.get() << std::endl;
  if (str.get())
    std::cout << "str value   : " << *str << std::endl;
  std::cout << "str_move address : " << str_move.get() << std::endl;
  if (str_move.get())
    std::cout << "str_move value   : " << *str_move << std::endl;
}

static inline void func_shared_ptr()
{
  auto db = std::make_shared<double>(3.14);
  auto db2 = db;
  (*db)++;
  std::cout << "db2 value : " << *db2 << std::endl;
}

int main()
{
  func_unique_ptr();
  std::cout << std::endl;
  func_shared_ptr();
  std::cout << std::endl;
  return 0;
}
