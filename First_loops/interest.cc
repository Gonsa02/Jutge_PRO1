#include <iostream>
using namespace std;

int main(){
	int years;
	double capital,interest, final_capital;
	string type;
	cin >> capital >> interest >> years >> type;
	if (type =="simple"){
		final_capital=capital;
		for(int i=0; i<years;++i){
		final_capital = final_capital + capital*0.01*interest;
		}
	}
	else if (type =="compound"){
		for(int i=0; i<years; ++i){
		capital = capital + capital*0.01*interest;
		}
		final_capital = capital;
	}
	cout.setf(ios::fixed);
	cout.precision(4);
	cout << final_capital << endl;
}
