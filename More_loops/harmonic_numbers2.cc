#include <iostream>
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	int n, m;

	while(cin >> n >>m){
		if (n ==m) cout << double(0) << endl;
		else {
			double result=0;
			for(double i=m+1; i<=n; ++i){
				result = result + 1/i;
		}
			cout << result <<endl;

}}}
