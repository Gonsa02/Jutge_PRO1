#include <iostream>
using namespace std;

int main(){
	double a, result, n=0;
	while(cin>>a){
		result = result +a; 
		++n;
	}
	cout.precision(2);
	cout << fixed << result/n <<endl;
}
