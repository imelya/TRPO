#include <iostream>
#include "Task.h"
#include "math.h"

Task::Task()
{
    //ctor
}

Task::~Task()
{
    //dtor
}
int Task::operator () (int value) {
if (value == (int)sqrt(value)*(int)sqrt(value))
    std::cout << value*10 << ' ';
return value;
}
