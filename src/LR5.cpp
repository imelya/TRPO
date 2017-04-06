#include <iostream>
#include <algorithm>
#include <list>
#include "main.h"

/*
int main() {
	std::string s("hello world!");
	std::cout << "small string:\n" << s << '\n';
	std::transform(s.begin(), s.end(), s.begin(), (int (*)(int))std::toupper);
	std::cout << "BIG STRING:\n" << s << '\n';
	return 0;
}
*/

template <typename T>
void printtrans (std::list<T>& v) {
    std::transform(v.begin(), v.end(), v.begin(), [] (const T& n) {
		char N;	
       	std::list<char> V;
		if ((int) n < 123 && (int) n > 96) {
            N = (char) (n - 32);
            V.push_back(N);
		}
		else if ((int) n < 91 && (int) n > 64) {
            N = (char) (n + 32);
            V.push_back(N);
		}
		else {
			return n;
		}
        for (std::list<char>::iterator it = V.begin(); it != V.end(); it++) {
        	std::cout << *it << ' ';
       	}
        return n;
    });
}

int LR5() {
	char answer;
	char letter;
    	std::cout << "Start letter\n";
    	std::cin >> letter;
	std::list<char> v;
	for (uint i = 0; i < 26; i++) {
		char sym = letter;
		sym +=i;
		v.push_back(sym);
	}
	std::cout << "First list:" << '\n';
	for (std::list<char>::iterator it = v.begin(); it != v.end(); it++) {
		std::cout << *it << ' ';
	}
	std::cout << '\n';
	std::cout << "Output list:" << '\n';
    printtrans(v);
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
