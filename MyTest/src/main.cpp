#include<gtest/gtest.h>

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}
TEST(testCase, test0) {
	EXPECT_EQ(add(2, 3), 5);
	EXPECT_EQ(subtract(10, 4), 7);
}
int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}