#include <iostream>
using namespace std;

int main(){
	int i=0;
	double n, a,suma=0,product=0;
	cin>>n;
	while (i<n){
		cin >> a;
		suma = suma +a;
		product = product +(a*a);
		++i;
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << ((1/(n-1))*product)-((1/(n*(n-1))*(suma*suma)))<<endl;
}
