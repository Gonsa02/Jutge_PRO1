#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for(int i=0; i<n; ++i){
		int number;
		cin >> number;
		if ((number ==1)or(number ==0)){
		   	cout << number <<" is not prime"<<endl;
		}
		else{
		bool isPrime = true;
		int j = 2;

		while((j*j <= number)and(isPrime==true)){
			if(number%j ==0) isPrime = false;
			++j;
		}
		if ((isPrime == true) and (n > 1)) cout << number <<" is prime"<<endl;
		else cout << number << " is not prime"<<endl;
}}}
