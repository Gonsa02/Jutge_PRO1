#include <iostream>
using namespace std;

int main(){
	int files, columnes;
	cin >> files >>columnes;

	for(int i=0; i<files; ++i){
		for(int j=0; j<columnes; ++j){
			if(i==j) cout<<'0';
			else if (j>i) cout<<(j-i)%10;
			else if (i>j) cout<<(i-j)%10;	
		}
		cout<<endl;
	}
}
