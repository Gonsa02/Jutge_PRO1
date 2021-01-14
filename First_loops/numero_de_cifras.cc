#include <iostream>
using namespace std;

int main(){
	int a, n, cifras;
	cin >> a;
	for(int i=2; i<=16; ++i){
		n=i;
		cifras=1;
		while(a>n-1){
			n=n*i;
			++cifras;
		}
		cout <<"Base "<<i<<": "<<cifras<<" cifras."<<endl;
}}
