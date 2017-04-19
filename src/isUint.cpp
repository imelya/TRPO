#include <string>

bool isUint (const std::string& s) {
	if (s.find_first_not_of("0123456789") == std::string::npos)
		return true;
	else 
		return false;
}

