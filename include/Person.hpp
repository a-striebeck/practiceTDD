#ifndef PERSON_HPP
#define PERSON_HPP
#include <iostream>
#include <Vest.hpp> 
#include <Arm.hpp> 
#include <Leg.hpp> 
#include <Brain.hpp> 

using namespace std;

class Person
{
    public:
        Person(string name, Vest* vest);
        ~Person();
        bool Burpee();

    private:
        string m_name;
        Brain* m_brain;
        Arm* m_arm1;
        Arm* m_arm2;
        Leg* m_leg1;
        Leg* m_leg2;

        //atributo agregado
        Vest* m_vest;
};

#endif