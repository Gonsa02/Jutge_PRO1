#include <iostream>
using namespace std;

int main(){
	string prev, next;
	int n, c=1,last=0;
	while (cin>>n){

		bool increasing = true;
		if (n>0) cin >> prev;
		for (int i = 1; i<n; ++i) {
			cin >> next;
			if (next < prev) increasing = false;
			prev = next;
		}
		if (increasing) last =c;
		++c;
	}
	if (last != 0) cout <<"The last line in increasing order is "<< last <<"."<<endl;
	else cout <<"There is no line in increasing order." <<endl;
}
