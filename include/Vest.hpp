#ifndef VEST_HPP
#define VEST_HPP
#include <iostream>
using namespace std;

class Vest
{
    public:
        Vest(string brand);
        ~Vest();

        string getBrand();

    private:
        string myBrand;
};

#endif