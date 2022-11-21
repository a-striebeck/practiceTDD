#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <catch.hpp>
#include <iostream>
#include <Person.hpp>
using namespace std;

TEST_CASE( "Correct execution of method Burpee", "[Person exercise]" ) 
{
    // Arrange
    string personName = "Cocho";
    Vest* _vest = new Vest("Le Utthe");  
    Person* p = new Person(personName, _vest);

    // Act
    bool result = p->Burpee();

    // Assert
    REQUIRE( result == true );
}