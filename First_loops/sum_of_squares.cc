#include <iostream>
using namespace std;

int main(){
	int a, result=0;
	cin>>a;
	for(int i=0;i<=a;++i){
		result = result + i*i;
	}
	cout <<result<<endl;
}
