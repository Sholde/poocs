#include "gtest/gtest.h"
#include "mylib.h"

TEST(UnitTest, MyLibTestPrintTest)
{

}

TEST(UnitTest, MyLibTestPlusTest)
{
  MyLib::MyClass c{};
  // True test
  EXPECT_EQ(13, c.plus(4, 9));
  EXPECT_EQ(5, c.plus(-4, 9));
  EXPECT_EQ(0, c.plus(0, 0));
  EXPECT_EQ(-3, c.plus(0, -3));

  // Just for see errors of fail test
  EXPECT_EQ(1, c.plus(1, 1));
}
