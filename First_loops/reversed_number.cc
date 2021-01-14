#include <iostream>
using namespace std;

int main(){
	int a;
	cin >> a;
	if ((a/10 !=0)or(a%10 !=0)){
		while((a/10 !=0)or(a%10 !=0)){
			cout << a%10;
			a=a/10;
	}}else{
	cout <<0;
	}
	cout <<endl;
}
