#include <iostream>
using namespace std;

int main(){
	int rows, columns;
	cin >> rows >> columns;
	int x;
	int coins=0;
	for(int row=1; row <=rows; ++row){
		cin >> x;
		if(row % 2 !=0) x = x/10;
		for(int column=1; column <= columns; column = column +2){
			coins += x%10;
			x = x/100;
		}
	}
	cout << coins << endl;	
}
