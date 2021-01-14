#include <iostream>
#include <vector>
using namespace std;

bool is_palindrome(const string& s) {
	
	int i = 0, j = s.size()-1;

	bool palindrome = true;

	while (palindrome and i <= j) {
		
		if (s[i] != s[j]) palindrome = false;	
		++i;
		--j;	
	}

	if (palindrome == true) return true;
	else return false;
}

