#include <iostream>
#include <list>
#include "check.h"
#include "tasks.h"
#include "main.h"

int LR2 () {
	int input;
	size_t k;
	char a, b;
	std::cout << "===LR2===\n";
	std::cout << "1. Task 1\n";
	std::cout << "2. Task 2\n";
	std::cout << "3. Main menu\n";
	std::cout << "4. Exit\n";
	std::cin >> input;
	if (!std::cin){
		std::cout << "Need number, aborting...\n";
	}
	else {
	switch (input) {
		case 1:
			std::cout << "Size of list\n";
			std::cin >> k;
			if (!std::cin)
				std::cout << "Need number, aborting...\n";
			else {
				if (check2(k)){
				task1(k);
				}
				else {
					std::cout << "Need 2 or more, try again? (y/n)\n";
					std::cin >> a;
					if (a=='y')
						LR2();
					else
						return 0;
					
				} 
			}
			break;

		case 2:
			task2();
			break;
		case 3:
			main();
			break;
		case 4:
			return 0;
			break;
		default:
			std::cout << "Need 1,2 or 3. Try again? (y/n)\n";
			std::cin >> b;
			if (b=='y')
				LR2();
			else
				break;
	}
	}

	return 0;

}

