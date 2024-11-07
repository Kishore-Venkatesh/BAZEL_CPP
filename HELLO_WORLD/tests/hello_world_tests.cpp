#include <gtest/gtest.h>

TEST(HelloWorld_Test,BasicAssertions)
{
    ASSERT_STREQ("Hello World","Hello World");
    EXPECT_EQ("Hello World","Hello World");
    ASSERT_STRNE("Hello World!","Hello ,World!");
}

int main(int argc,char **argv)
{
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}