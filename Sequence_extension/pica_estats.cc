#include <iostream>
using namespace std;

int main(){
	int a;
	cin >> a;
	int b=a,c=a;
	bool find = false;
	while(cin>>a and find == false and a!=0){
		if(b>3143 and a<b and c<b) find = true;
		c=b;
		b=a;
	}
	if (find) cout <<"YES"<<endl;
	else cout <<"NO"<<endl;
}
