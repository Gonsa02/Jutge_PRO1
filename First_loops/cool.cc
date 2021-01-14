#include <iostream>
using namespace std;

int main() {
	int a, sum=0, i=0, number;
	cin>> number;
	a=number;
	while((a/10 !=0) or (a%10 !=0)){
		++i;
		if (i%2 !=0){
			sum = sum + a%10;
		}
		a = a/10;
	}
	if (sum%2 == 0){
		cout << number << " IS COOL"<<endl;
	}else{
		cout << number << " IS NOT COOL"<<endl;
	}	
}
