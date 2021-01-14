#include <iostream>
using namespace std;

int main() {
	string a;
	int counter = 0;
	while(cin>>a){
		if (a=="hello") ++counter;
	}
	cout << counter << endl;
}
