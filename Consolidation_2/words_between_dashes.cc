#include <iostream>
using namespace std;

int main() {

	int s = 0, m = 0, l = 0, counter = 0;
	char c;

	cin >> c;
	while (c != '.') {

		if (c != '-') ++counter; 
		else {

			if (counter > 0 and counter < 5) ++s;
			else if (counter >= 5 and counter < 10) ++m;
			else if (counter >= 10) ++l;
			counter = 0;

		}	
		
		cin >> c;
		if (c == '.') {

			if (counter > 0 and counter < 5) ++s;
			else if (counter >= 5 and counter < 10) ++m;
			else if (counter >= 10) ++l;

		}

	}

	cout << s << ','<< m << ',' << l << endl;

}
