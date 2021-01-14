#include <iostream>
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.precision(4);
	double a, b, k, result=0;
	while(cin>>a>>b>>k){
		for(double i=0; (a+(i*k))<=b; ++i){
			result+= 1/(a+(i*k));
		}
		cout <<result<<endl;
		result = 0;
	}
}
