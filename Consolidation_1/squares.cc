#include <iostream>
using namespace std;

int main(){
	int a;
	bool space = false;
	while (cin>>a){
		if (space) cout <<endl;
		else	space = true;
		for(int i = 1; i<=a;++i){
			for(int j = 1; j<=a;++j){
				cout <<a;
			}
			cout<<endl;
		}
	}	
}
