#include <iostream>
using namespace std;

int main(){
	char a;
	cin>>a;
	if ((int(a)>=65 and int(a)<=90)or(int(a)>=97 and int(a)<=122))cout <<"lletra";
	else if (int(a)>=48 and int(a)<=57) cout <<"digit";
	else cout <<"res";
	cout << endl;
}
