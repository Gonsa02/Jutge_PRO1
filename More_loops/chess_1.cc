#include <iostream>
using namespace std;

int main(){
	int rows, columns;
	cin >> rows >> columns;
	
	char x;
	int coins=0;
	for(int row=1; row<=rows; ++row){
		for(int column=1; column <=columns; ++column){
			cin >> x;
			coins += x-'0';
		}
	}
	cout << coins <<endl;
}
