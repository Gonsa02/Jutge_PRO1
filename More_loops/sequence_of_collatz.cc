#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin>> n){
		int steps = 0;
		while (n != 1){
			if (n%2 ==0){
			       	n= n/2;
				++steps;
			}
			else {
				n = 3*n+1;
				++steps;
			}
		}
		cout << steps << endl;
}}
