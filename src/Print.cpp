#include <iostream>
#include "Print.h"

Print::Print()
{
    //ctor
}

Print::~Print()
{
    //dtor
}
void Print::operator() (int value) {
    std::cout << value << ' ';
}
