#ifndef ISUINT_H
#define ISUINT_H

bool isUint (const std::string& s); /*{
	if (s.find_first_not_of("0123456789") == std::string::npos)
		return true;
	else 
		return false;
}
*/
#endif // ISUINT_H
