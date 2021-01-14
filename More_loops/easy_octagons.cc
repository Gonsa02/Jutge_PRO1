#include <iostream>
using namespace std;

int main(){
	int n, spaces, x;
	while(cin>>n){
	spaces = n-1;
	x=n;
	for(int i=spaces; i !=0; --i){
		for(int times = 0; times<i; ++times){
			cout <<' ';
		}
		for(int times = 0; times < x; ++times){
			cout <<'X';
		}
		cout <<endl;
		x=x+2;
	}
	for(int i=0; i<n; ++i){
		for(int times =0; times <x; ++times){
			cout<< 'X';
		}
		cout <<endl;
	}
	x=x-2;
	for(int i=1; i <=spaces; ++i){
		for(int times = 0; times<i; ++times){
			cout <<' ';
		}
		for(int times = 0; times < x; ++times){
			cout << 'X';
		}
		cout <<endl;
		x=x-2;
	}
	cout <<endl;
	}

}
