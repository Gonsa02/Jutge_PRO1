#include <iostream>
using namespace std;


void swap() {
	
		string x;
		cin >> x;
		if (x!= "end") {

			swap();
			cout << x << endl;
		}
}

int main() {
	
	swap();

}
