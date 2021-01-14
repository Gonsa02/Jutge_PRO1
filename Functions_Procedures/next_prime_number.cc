#include <iostream>
using namespace std;

bool is_prime(int n){
	if (n>=2){
	int i=2;
	bool is_prime = true;
	while(is_prime and i*i<=n){
		if (n%i==0) is_prime=false;
		++i;
	}
	return is_prime;
	}
	else return false;
}

int next_prime(int n){
	bool prime=false;
	int i = n+1;
	while(!prime){
		if (is_prime(i)) prime = true;
		else ++i;	
	}
	return i;
}

int main(){
	
	int n;
	bool prime = true;
	while(prime and cin>>n){

		if (is_prime(n)) cout<<next_prime(n)<<endl;
		else prime = false;
	}
}
