#include <iostream>
#include <list>
#include <string>
#include "check.h"
#include "tasks.h"
#include "main.h"
#include "isUint.h"

int LR2 () {
	char answer = ' ';
	do {
		size_t k;
		std::string input;
		std::cout << "===LR2===\n";
		std::cout << "1. Task 1\n";
		std::cout << "2. Task 2\n";
		std::cout << "3. Main menu\n";
		std::cout << "4. Exit\n";
		std::cin >> input;
		if (!isUint(input)) { 
			std::cout << "Need number. Try agan? (y/n)\n";
			std::cin >> answer;
			if (answer =='y'){
				continue;
			}
		}
		else {
			switch (input[0]) {
				case '1':
					std::cout << "Size of list\n";
					std::cin >> k;
					if (!std::cin)
						std::cout << "Need number, aborting...\n";
					else {
						if (check2(k)){
						LR2task1(k);
						}
						else {
							std::cout << "Need 2 or more, try again? (y/n)\n";
							std::cin >> answer;
							if (answer=='y')
								continue;
						} 
					}
				break;
				case '2':
					LR2task2();
				break;
				case '3':
					main();
				break;
				case '4':
				break;
				default:
					std::cout << "Need 1,2 or 3. Try again? (y/n)\n";
					std::cin >> answer;
					if (answer =='y') {
						continue;
					}
			}		
		}
		return 0;
	}
	while (answer == 'y');
	return 0;
}
