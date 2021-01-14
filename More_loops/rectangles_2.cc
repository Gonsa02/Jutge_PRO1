#include <iostream>
using namespace std;

int main(){
	int n,m;
	bool space=false;
	while (cin >> n >> m){
		if (space == true){
			cout <<endl;
		}
		int number=9;
		for(int row=1; row <= n; ++row){
			for(int column=1; column <= m; ++column){
				cout << number;
				--number;
				if (number<0) number = 9;
			} cout <<endl;
		}
		space =true;
	}
}
