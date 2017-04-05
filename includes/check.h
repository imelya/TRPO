#ifndef FUNC_H
#define FUNC_H
#include <iostream>

bool check1 (int number) {
if ( isdigit (number) )
	return false;
	else
		return true;
}
bool check2 (int number) {
if ( number < 2 )
    return false;
    else
  		return true;
}
#endif
