#include <iostream>
using namespace std;

int main(){
	int p, counter=0;
	cin >> p;
	string n;
	if (p>=1){
		while(cin >> n){
			++counter;
			if (p == counter){
				cout <<"At the position " <<p<<" there is a(n) "<<n<<'.'<<endl;
			}
		}
		if (counter < p) cout <<"Incorrect position."<<endl;
	}else cout <<"Incorrect position."<<endl;
}
