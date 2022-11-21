#include <Person.hpp>

Person::Person(string name, Vest* vest)
{
    m_name = name;
    m_brain = new Brain();
    m_arm1 = new Arm();
    m_arm2 = new Arm();
    m_leg1 = new Leg();
    m_leg2 = new Leg();

    m_vest = vest;

    cout << m_name << " se ha creado" << endl;
    cout << "Tiene un chaleco:" << m_vest->getBrand() << endl;
}

Person::~Person()
{
    delete m_brain;
    delete m_arm1; 
    delete m_arm2; 
    delete m_leg1;
    delete m_leg2;
}

bool Person::Burpee(){
    m_arm1->pullUp();
    m_arm2->pullUp();
    m_leg1->jump();
    m_leg2->jump();
    return true;
}