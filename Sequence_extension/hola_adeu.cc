#include <iostream>
using namespace std;

int main() {
	char a, b, c, d;
	a='x';
	b='x';
	c='x';
	cin >> d;
	bool found=false;
	while(not found and d!='.'){
		found = (a=='h' and b=='o' and c=='l' and d=='a');
		a = b;
		b = c;
		c = d;
		cin >>d;
	}
	if (found) cout <<"hola"<<endl;
	else cout <<"adeu"<<endl;
}
