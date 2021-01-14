#include <iostream>
using namespace std;

int main(){
	int n;
	double result=0;
	cin >> n;
	for(double i=1; i<=n; ++i){
		result = result +(1/i);
	}
	cout.precision(4);
	cout<<fixed << result <<endl;
}
