#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	if (a>b){
		while (a>=b) {
			cout << a << endl;
			--a;
		}
	}
	else if (b>a){
		while (b>=a){
			cout << b << endl;
			--b;
		}
	}
	else if (b==a){
	cout << b << endl;
	}
}
