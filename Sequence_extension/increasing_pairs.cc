#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; ++i){
		int a, b=0, counter=0;
		bool first = true;
		while(cin>>a and a != 0){
			if (first){
				first = false;
				b=a;
			}
			else{
				if (a > b) ++counter;
				b = a;
			}
		}
		cout <<counter<<endl;
	}
}
