#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}


// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail")
{
    // Add the tests for excercise 3 "sumtail" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(sumtail(3, 0) == 6); // normal case
    REQUIRE(sumtail(1, 0) == 1); // edge case
    // I would test if it aborts, but i don't know how to write the require function for that... sumtail(-1, 0) -> abort()
}

TEST_CASE("sumwhile")
{
    // Add the tests for excercise 3 "sumwhile" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(sumwhile(3) == 6); // Normal case
    REQUIRE(sumwhile(1) == 1); // Edge case
    // I would test if it aborts, but i don't know how to write the require function for that... sumwhile(-1) -> abort()
}

TEST_CASE("sumn")
{
    REQUIRE(sumn(1)==1); // sum(1) must be 1
    REQUIRE(sumn(3)==9); //sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33)==1089); //sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{
   // Add the tests for excercise 4 "fib" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(fib(1, 0, 0) == 1); // Tests edge case
    REQUIRE(fib(2, 0, 0) == 1); // Tests edge case
    REQUIRE(fib(10, 0, 0) == 55); // Tests normal case
    // I would test if it aborts, but i don't know how to write the require function for that... fib(-1, 0, 0) -> abort()
}


