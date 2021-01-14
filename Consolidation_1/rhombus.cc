#include <iostream>
using namespace std;

int main(){
	int n, spaces, print=1;
	cin >> n;
	spaces = n-1;
	for(int lines=1; lines<=n; ++lines){

		for(int space=1; space <=spaces; ++space){
			cout<<' ';
		}
		--spaces;
		for(int ast=1; ast<=print; ++ast){
			cout<<'*';
		}
		print += 2;
		cout <<endl;
	}	
	spaces=1;
	print=print-4;
	for(int lines=1; lines<=n-1; ++lines){

		for(int space=1; space <=spaces; ++space){
			cout<<' ';		
		}
		++spaces;
		for(int ast=1; ast <=print; ++ast){
			cout<<'*';
		}
		print=print-2;
		cout <<endl;
	}
}
