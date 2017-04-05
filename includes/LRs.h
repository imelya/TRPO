#ifndef LRS_H
#define LRS_H

int LR1 ();
int LR2 ();
int LR3 ();
bool isUint (const std::string& s) {
	if (s.find_first_not_of("0123456789") == std::string::npos)
		return false;
	else 
		return true;
}
int LR4 ();
int LR5 ();

#endif // LRS_H
