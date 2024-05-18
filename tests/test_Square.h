
#ifndef TEST_SQUARE_H
#define TEST_SQUARE_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "Square.h"
}
double array[2];
TEST(testSquare, 2roots) {
    calculateRoots(array,1,-3,2);
    ASSERT_EQ(calculateRoots(array,1,-3,2), 2);
    ASSERT_EQ(array[0],2);
    ASSERT_EQ(array[1],1);
}
TEST(testSquare, floatroots) {
    calculateRoots(array,1,-4, 3.75);
    ASSERT_EQ(calculateRoots(array,1,-4, 3.75), 2);
    ASSERT_EQ(array[0],2.5);
    ASSERT_EQ(array[1],1.5);
}
TEST(testSquare, nulsquare) {
    calculateRoots(array,1,-2,1);
    ASSERT_EQ(calculateRoots(array,1,-2,1), 1);
    ASSERT_EQ(array[0],1);
    ASSERT_EQ(array[1],1);
}
TEST(testSquare, minussquare) {
    calculateRoots(array,500,-2,1);
    ASSERT_EQ(calculateRoots(array,500,-2,1), 0);
}
TEST(testSquare, anol) {
    calculateRoots(array, 0,-2,1);
    ASSERT_EQ(calculateRoots(array, 0,-2,1), 0);
}
#endif // TEST_SQUARE_H
