#include <iostream>
#include <math.h>
using namespace std;

int raiz(int n){
	return sqrt(n);
}

int pow(int n){
	return n*n;
}

int main(){
	int n;
	while (cin>>n){
		cout<<pow(n)<<' ';
		cout.precision(6);
		cout<<fixed<<sqrt(n)<<endl;
	}
}
