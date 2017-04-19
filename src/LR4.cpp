/*Дан целочисленный вектор. Используя функцию transform умножить на масштабирующий коэффициент все элементы вектора,
являющиеся точными квадратами.*/
#include <iostream>
#include <string>
#include <math.h>
#include <sstream>
#include "LR4.h"
#include "helpFunctions.h"

int LR4() {
	int s;
	std::string input;
	char answer = ' ';
	do {
		std::cout << "Size of vector:\n";
		std::cin >> input;
		if (!isUint(input)) { 
			std::cout << "Need number. Try agan? (y/n)\n";
			std::cin >> answer;
			if (answer == 'y'){
				continue;
			}
			else {
				return 0;
			}
		}
		else {
		std::istringstream it(input);
		it >> s;
		answer = ' ';
		LR4task(s);
		}
	}
	while (answer == 'y');
	return 0;
}
