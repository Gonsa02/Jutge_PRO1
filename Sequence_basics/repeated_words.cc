#include <iostream>
using namespace std;

int main (){
	string n, last;
	int counter =1, best_counter=1;
	cin >>n;
	last=n;
	while(cin >> n){
		if(last == n){
		       	++counter;
			if (counter > best_counter) best_counter=counter;
		}
		if(last != n){
			counter = 0;
		}
	}
	cout << best_counter <<endl;
}
