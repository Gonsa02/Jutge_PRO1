#include <iostream>
using namespace std;

int main(){ 
	int n, acumulador = 0, realitzat=0;
	while(cin>>n){
		if (n != 0){
		int counter=1;
		string text,a,b,c;
		cin >> text;
		b=text;
		c=text;
		for(int i=1; i<n; ++i){
			cin >> a;
			if (a>=b and b>=c) ++counter;
			c = b;
			b = a;	
		}
		if (counter == n){
			realitzat += acumulador + 1;
			acumulador = 0;
		}
		else ++acumulador;
		}	
		else realitzat = 1;
	}
	if (realitzat > 0) cout << "L'ultima linia ordenada creixentment es la " << realitzat <<'.'<<endl;
	else cout << "No hi ha cap linia ordenada creixentment."<<endl;
}
