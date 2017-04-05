/*Дан целочисленный вектор. Используя функцию transform умножить на масштабирующий коэффициент все элементы вектора,
являющиеся точными квадратами.*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include "Task.h"
#include "Print.h"
#include "main.h"

int LR4()
{
 	char answer;
 	std::vector<int> v;
    uint s;
    std::cout << "Size of vector: " << '\n';
    std::cin >> s;
    for (uint i = 0; i < s; i++) {
        v.push_back(rand() % 577);
    }
    std::cout << "Iterator output\n";
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        std::cout << *it << ' ';
    }
    std::cout << '\n';
    std::cout << "For_each output\n";
    for_each(v.begin(), v.end(), Print());
    std::cout << '\n';
    std::cout << "Transform output\n";
    transform (v.begin(), v.end(), v.begin(), Task());
    std::cout << '\n';
	std::cout << "Return to main menu? (y/n)\n";
	std::cin >> answer;
	if (answer == 'y') {
		answer = ' ';
		main();
	}
	else 
		return 0;
	return 0;
}
