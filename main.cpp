#include <iostream>
#include <string>
#include <cstring>
#include "LRs.h"

int main () {
	char answer = ' ';
	do  { 
		std::string choseStr;
		std::cout << "======LRs======\n";
		std::cout << "1.    LR1\n";
		std::cout << "2.    LR2\n";
		std::cout << "3.    LR3\n";
		std::cout << "4.    LR4\n";
		std::cout << "5.    LR5\n";
		std::cout << "6.    Exit\n";
		std::cin >> choseStr;
		if ( ! isUint(choseStr) ) { 
			std::cout << "Need number. Try agan? (y/n)\n";
			std::cin >> answer;
			if (answer =='y'){
				continue;
			}
		}
		else {
			switch (choseStr[0]) {
				case '1':
					LR1();
				break;
				case '2':
					LR2();
				break;
				case '3':
					LR3();
				break;
				case '4':
					LR4();
				break;
				case '5':
					LR5();
				break;
				case '6':
					return 0;
				default:
					std::cout << "Wrong number. Try again? (y/n)\n";
					std::cin >> answer;
					if (answer =='y'){
						continue;
					}
			}
		}
		return 0;
	}
	while ( answer == 'y');
}
