#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <catch.hpp>
#include <iostream>
#include <Brain.hpp>
using namespace std;

TEST_CASE( "Correct execution of method think", "[Brain think]" ) 
{
    // Arrange
    Brain* b = new Brain();

    // Act
    bool result = b->think();

    // Assert
    REQUIRE( result == true );
}