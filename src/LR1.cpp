/*Опишите параметризованную функцию инверсии массива элементов. Продемонстрируйте использование функции для разных типов данных.
*/
#include <iostream>
#include <sstream>
#include "LR1task.h"
#include "helpFunctions.h"

int LR1() {
	uint s = 0;
	std::string input;
	char answer = ' ';
	do {
		std::cout << "==LR1==\n";
		std::cout<<"SizeOfIntArray: ";
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
			std::stringstream it(input);
			it >> s;
			if (!check2(s)) {
				std::cout << "Less then 2. Try again? (y/n)\n";
				std::cin >> answer;
				if (answer == 'y') {
					continue;
				}
				else {
					return 0;
				}
			}
			std::vector<int> vec(s);
			std::cout << "Array: ";
				for(uint i = 0; i < vec.size(); i++) {
					vec[i] = i;
					std::cout << vec[i] << ' ';
				}
			std::vector<int> new_vec = invert(vec);
			std::cout << "\nInvertArray: ";
				for (uint k = 0; k < s; k++) {
					std::cout <<new_vec[k] << " ";
				}
			std::cout << "\n";

			std::vector<unsigned char>vect;
				for(size_t i = 0; i < s; ++i ) {
					char sym = 'a';
					sym += i;
					vect.push_back(sym);
				}

			//cout<<"Code a: "<<(int) 'a' <<"\n";
			//cout<<"Code A -> a: "<<(char) ('A' + 32) <<"\n";

			std::cout << "\n";
			std::cout << "ArrayStr: ";
				for(uint i=0; i<vect.size(); ++i) {
					std::cout <<vect[i] << " ";
				}
			std::vector<unsigned char> new_vect = invert(vect);
			std::cout << "\nInvertArrayStr: ";
				for(uint i=0; i<vect.size(); ++i) {
					std::cout << vect[i] << " ";
				}
			std::cout << "\n";
			std::cout << "Return to main menu? (y/n)\n";
			std::cin >> answer;
			if (answer == 'y') {
				answer = ' ';
				main();
			}
			else 
				return 0;
		}
	}
	while (answer == 'y'); 
    return 0;
}
