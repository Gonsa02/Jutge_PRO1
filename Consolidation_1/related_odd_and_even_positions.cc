#include <iostream>
using namespace std;

int main(){
	int a,b,odd=0, even=0;
	cin >> a;
	while(a%10!=0 or a/10!=0){
		odd += a%10;
		a=a/10;
		even += a%10;
		a=a/10;
	}
	cout <<odd<<' '<<even<<endl;
	if (odd >= even){
		a = odd;
		b = even;
	}
	else {
		a = even;
		b = odd;
	}
	if(a!=0 and b!=0){
		if(a%b==0) cout << a << " = " << a/b << " * " << b << endl;
		else cout << "nothing"<<endl;
	}
	else cout << b << " = " << b << " * " << a << endl;
}
