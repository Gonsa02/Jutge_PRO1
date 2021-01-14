#include <iostream>
using namespace std;

char encoded(char c, int k){

	if (c=='_') return ' ';
	else if (int(c)<97 or int(c)>122) return c;
	else{
	       	if (int(c+k)>122) return char(((int(c)-97+k)%26)+65);
		else return char(int(c)+k-32);
	}
}

int main(){
	int k;
	char c;
	while(cin>> k){
		k=k%26;
		while(cin>>c and c!='.'){
			cout<<encoded(c,k);
		}
		cout<<endl;
	}
}
