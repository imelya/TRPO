/*Описать функцию, которая объединяет два упорядоченных по невозрастанию списка в один упорядоченный по невозрастанию список. */

#include <cstdlib>
#include <iostream>
#include <list>
#include "../includes/tasks.h"

std::ostream& operator<<(std::ostream& ostr, std::list<int>& list) {
	std::list <int>:: iterator itrl;
	for (itrl = list.begin(); itrl != list.end(); itrl++) {
		ostr << *itrl << " ";
	}
	return ostr;
}

int LR2task1 (size_t s) {
	char a;
// Список 1
	std::list <int> lis;
	for (size_t i=0; i < s; i++) {
		lis.push_back(rand() % 577);
		}
	std::cout << "List 1: " << lis << "\n";
    lis.sort(std::greater<int>());

// Список 2
		std::list <int> liss;
        for (size_t k=0; k < s; k++) {
                liss.push_back(rand() % 666);
                }
        std::cout << "List 2: " << liss << "\n";
        liss.sort(std::greater<int>());

// Конечный список
		lis.merge(liss);
		lis.sort(std::greater<int>());
		std::cout << "Joined and sorted: " << lis << "\n";
	std::cout << "Return to LR2 menu? (y/n)\n";
	std::cin >> a;
	if (a=='y')
		LR2();
	else
		return 0;
	return 0;
}


