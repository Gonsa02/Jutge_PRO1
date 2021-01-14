#include <iostream>
using namespace std;

int main(){
	int a;
	cin>>a;
	if((a/16 !=0)or(a%16 !=0)){
		while((a/16 !=0)or(a%16 !=0)){
			if (a%16 == 10){
				cout <<'A';
			}
			else if (a%16 == 11){
				cout <<'B';
			}
			else if (a%16 == 12){
				cout <<'C';
			}
			else if (a%16 == 13){
				cout <<'D';
			}
			else if (a%16 == 14){
				cout <<'E';
			}
			else if (a%16 == 15){
				cout <<'F';
			}else{
				cout << a%16;
			}
			a=a/16;
		}}else{
			cout<<0;
		}
		cout <<endl;
}
