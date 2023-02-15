#include "pch.h"
#include "calculator.h"
TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(AddTestCase, calName) {
	int val = addition(1, 1);
	EXPECT_EQ(2, val);
	EXPECT_TRUE(true);
}

TEST(SubTestCase, calName) {
	int val = subtraction(1, 1);
	EXPECT_EQ(0, val);
	EXPECT_TRUE(true);
}