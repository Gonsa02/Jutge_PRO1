#include <iostream>
using namespace std;

int main(){
	int expenses, saves, weeks, more_saves, counter=0;
	cin>> expenses >> saves >> weeks;
	while ((saves > 0) or (weeks > 0)){
		if (weeks > 0){
			cin >> more_saves;
			saves = saves + more_saves;
			--weeks;
		}
		saves = saves - expenses;
		if (saves > 0){
			++counter;
		}}
	cout << counter <<endl;
}
