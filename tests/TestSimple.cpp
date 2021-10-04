#include <Demo/Demo.h>
#include <gtest/gtest.h>

TEST(TestSimple, HelloWorldOk) {
    EXPECT_STREQ("Hello world!", Demo::HelloWorld());
}
