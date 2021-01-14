#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; ++i){
		double num, min, max;
		cin>>num;
		double a, result;
		cin>>a;
		min = a;
		max = a;
		result = a;
		for(int j=1; j<num; ++j){
			cin>>a;
			result += a;
			if(a < min) min=a;
			if(a > max) max=a;
		}
		result = result/num;
		cout.precision(4);
		cout <<fixed << min <<' '<<max<<' '<<result<<endl;
	}
}
