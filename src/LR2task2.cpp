/*Дана строка слов, разделенных пробелами. Сформируйте новую строку, заменив каждую группу внутренних пробелов одним пробелом. Оставьте в строке только первые вхождения слов. Определите самое короткое слово.*/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <set>
//#include <regex>
#include "../includes/tasks.h"
/*
std::string regex_style(std::string & string){
    std::regex re1 ("^\\s+|\\s+$");
	    std::regex re2 ("\\s+");
		    return std::regex_replace( std::regex_replace(string,re1,""), re2, " ");
	}
*/
int task2 () {
	char a;
	//Spaces
	//First Way
	std::string ABC, ABC2, Word;
	ABC = "q   we we      we     we  ert   qw    qw   qw   yu  yu   yu abcd   abcd";
	std::cout << "String: " << "\n" << ABC << "\n";
	std::cout << "\n";
/*	std::string ABC1 = regex_style(ABC);
	std::cout << "String without excess spaces first way: " << "\n" << ABC1 << "\n";
*/	std::cout << "\n";
	//Second Way
	int n=0;
	std::istringstream it1(ABC);
	while (it1 >> Word) {
		ABC2 = ABC2 + Word + " ";
		n++;
		}
	std::cout << "String without excess spaces second way ( " << n << " Words ): " << "\n"<< ABC2 << "\n";
	std::cout << "\n";
	//Third Way
	std::string ABC3 = ABC;
	auto last = std::unique(ABC3.begin(), ABC3.end(), [](char l, char r){
		return std::isspace(l) && std::isspace(r) && l == r;
	});
	ABC3.erase(last, ABC3.end());
	std::cout << "String without excess spaces third way: " << "\n" << ABC3 << "\n";
	std::cout << "\n";
	//Fourh way
	std::cout << "Vector without excess spaces ( fourh way ): " << "\n";
	std::vector<char> dat;
	std::copy(ABC.begin(), ABC.end(), std::back_inserter(dat));
/*	for(uint i=0; i<dat.size(); ++i) {
           std::cout << dat[i];
          }
	std:: cout << "\n";
*/	
	std::vector<char>::iterator it;
	it = std::unique(dat.begin(), dat.end());
    dat.erase(it, dat.end());
	for (auto val : dat)
		std::cout << val;
	std::cout << "\n";
	std::cout << "\n";
	//Dublicates
	std::cout << "String without excess spaces and dublicates: " << "\n";
	std::vector<std::string> data;
	std::stringstream ss(ABC);
	while (ss>>Word) {
		data.push_back(Word);
	}
	std::vector<std::string>::iterator end = std::unique(data.begin(), data.end());
	for (std::vector<std::string>::iterator iti = data.begin(); iti != end; ++iti)
		std::cout << *iti << " ";
	std::cout << "\n";
	std::cout << "\n";
	//Shortest word
	std::string ABC4 = ABC;	
	std::stringstream sh(ABC4);
	std::string shrt(ABC4);
    while (sh >> ABC4)
		if (ABC4.size() < shrt.size())
			shrt = ABC4;
	std::cout << "The shortest word: " << "\n" << shrt << "\n";
	//Unique string
	std::cout << "\n";
    std::cout << "==================================================" << "\n";
	std::string ABCD { "s s reg fg yh yh" };
	std::cout << ABCD << "\n";
	auto end_new = std::unique(ABCD.begin(), ABCD.end());
	ABCD.erase(end_new, ABCD.end());
	std::cout << ABCD << "\n";
    std::cout << "==================================================" << "\n";
	std::cout << "Return to LR2 menu? (y/n)\n";
	std::cin >>  a;
	if (a=='y')
		LR2 ();
	else
		return 0;
	return 0;
}
