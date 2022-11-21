#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <catch.hpp>
#include <iostream>
#include <Leg.hpp>
using namespace std;

TEST_CASE( "Correct execution of method walk", "[Leg walk]" ) 
{
    // Arrange
    Leg* l = new Leg();

    // Act
    bool result = l->jump();

    // Assert
    REQUIRE( result == true );
}