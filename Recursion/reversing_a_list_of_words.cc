#include <iostream>
using namespace std;

void swap() {
	
		string x;
		while(cin >> x) {

			swap();
			cout << x << endl;
		}
}

int main() {
	
	swap();

}
