#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <catch.hpp>
#include <iostream>
#include <Arm.hpp>
using namespace std;

TEST_CASE( "Correct execution of method Pull Up", "[Arm Pull Up]" ) 
{
    // Arrange
    Arm* b = new Arm();

    // Act
    bool result = b->pullUp();

    // Assert
    REQUIRE( result == true );
}