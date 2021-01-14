#include <iostream>
using namespace std;

int main(){
	int n, coins=0;
	cin>>n;
	int aux = n;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j){
			char a;
			cin >> a;
			if(i==j) coins += int(a)-int('0');
			if(j==aux) coins += int(a)-int('0');
			if(i==j and j==aux) coins -= int(a)-int('0');
		}
		--aux;
	}
	cout << coins <<endl;
}
