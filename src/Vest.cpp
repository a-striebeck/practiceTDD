#include <Vest.hpp>

Vest::Vest(string brand)
{
    myBrand = brand;
}

Vest::~Vest()
{

}

string Vest::getBrand() 
{
    return myBrand;
}
