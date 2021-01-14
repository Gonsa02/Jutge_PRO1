#include <iostream>
using namespace std;

int main(){
	bool verify=false;
	char a;
	while((cin>>a)and(a != '.')){
		if (a == 'a') verify=true;
	}
	if (verify == true) cout << "yes"<<endl;
	else cout <<"no"<<endl;
}
