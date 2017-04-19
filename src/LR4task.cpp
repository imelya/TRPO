#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include "Task.h"
#include "Print.h"
#include "helpFunctions.h"
#include "LR4.h"

int LR4task(uint s) {
	char answer = ' ';
	std::vector<int> v;
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
	std::cout << "Repeat, return to main menu or exit? (r,m,e)\n";
	std::cin >> answer;
	switch (answer){
		case 'r':
			LR4();
		break;
		case 'm':
			main();
		break;
		default:
			return 0;
	}	
	return 0;
}
