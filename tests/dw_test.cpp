#include <gtest/gtest.h>
#include "dw16.h"

TEST(SwapValues, SwapsTwoIntegers) {
    int a = 3, b = 7;
    swap_values(&a, &b);
    EXPECT_EQ(a, 7);
    EXPECT_EQ(b, 3);
}

TEST(SwapValues, SwapsEqualValues) {
    int a = 5, b = 5;
    swap_values(&a, &b);
    EXPECT_EQ(a, 5);
    EXPECT_EQ(b, 5);
}
