// #include <spdlog/spdlog.h>
#include <greeter.h>
#include <gtest/gtest.h>

TEST(component_test, test1) {
    Greeter greeter("Paul");
    ASSERT_STREQ("Hello Paul", greeter.say_hello().c_str());
    ASSERT_STREQ("Goodbye Paul", greeter.say_goodbye().c_str());
}