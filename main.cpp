#include <iostream>
#include <Vest.hpp>
#include <Person.hpp> 
using namespace std;

// int main(int argc, char const *argv[])
// {
//     /* Vest = Chaleco */
//     Vest gucci("Gucci");
//     Person juan("Juan", gucci);

//     return 0;
// }

int main()
{
    /* Vest = Chaleco */
    Vest* gucciVest = new Vest("Gucci");
    Person* juan = new Person("Juan", gucciVest);

    delete juan;
    delete gucciVest;
    return 0;
}