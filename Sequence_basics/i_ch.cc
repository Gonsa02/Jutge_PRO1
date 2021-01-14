#include <iostream>
using namespace std;

int main(){
	int p,n, counter=1;
	cin >> p;

	while(cin >>n){
		if (counter == p) cout <<"At the position "<<p<<" there is a(n) "<<n<<'.'<<endl;
		++counter;
	}
}
