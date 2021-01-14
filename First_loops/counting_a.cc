#include <iostream>
using namespace std;

int main(){
	int counter=0;
	char a;
	while((cin>>a)and(a!='.')){
		if(a=='a'){
			++counter;
		}
	}
	cout << counter <<endl;
}
