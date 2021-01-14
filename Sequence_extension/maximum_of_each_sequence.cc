#include <iostream>
using namespace std;

int main(){	
	int n;
	while(cin>>n){
		int mx;
		cin >> mx;
		for (int i=1; i<n; ++i){
			int x;
			cin>>x;
			if (x>mx) mx=x;
		}
		cout <<mx<<endl;
}
}
