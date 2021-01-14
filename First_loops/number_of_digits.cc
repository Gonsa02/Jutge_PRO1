#include <iostream>
using namespace std;

int main(){
	int n, digits=0, memory;
	cin >> n;
	memory = n;
	if (n!=0){
		while (n!=0){
			n = n/10;
			++digits;
	}}
	else{
		digits = 1;
	}
	cout <<"The number of digits of " << memory << " is " << digits <<'.'<<endl;
}
