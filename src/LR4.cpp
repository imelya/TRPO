/*Дан целочисленный вектор. Используя функцию transform умножить на масштабирующий коэффициент все элементы вектора,
являющиеся точными квадратами.*/
#include <iostream>
#include "LR4h.h"

int LR4() {
	int s;
	std::cout << "Size of vector:\n";
	if (std::cin >> s) {
		LR4task(s);
	}
	else 
		return 0;
	return 0;
}
