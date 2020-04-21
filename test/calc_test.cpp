
#include "calc.h"
#include "gtest/gtest.h"

TEST(CalcTest, add) {
  EXPECT_EQ(2, add_num(1, 1));
  EXPECT_EQ(5, add_num(2, 3));
  EXPECT_EQ(-5, add_num(-2, -3));
}

TEST(CalcTest, sub) {
  EXPECT_EQ(2, sub_num(3, 1));
  EXPECT_EQ(5, sub_num(8, 3));
  EXPECT_EQ(-5, sub_num(0, 5));
}

