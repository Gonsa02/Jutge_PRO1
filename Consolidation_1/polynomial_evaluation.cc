#include <iostream>
using namespace std;

int main(){
	double x, result,n,result_x_exponent;
	int counter=0;
	cin>>x;
	result_x_exponent = 1;
	while(cin>>n){
		if (counter == 0){
		       	result = n;
			++counter;
		}
		else {
		result_x_exponent = result_x_exponent*x;
		result += n*result_x_exponent;
		++counter;
		}
	}
	cout.precision(4);	
	cout<<fixed<< result<<endl;
}
