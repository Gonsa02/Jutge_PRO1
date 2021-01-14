#include <iostream>
using namespace std;

int main(){ 
	int n, contador_general=0;
	bool ordenada = false;
	while(ordenada != true and cin>>n){
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
		if (counter == n) ordenada = true;
		++contador_general;
		}
		else{
		      	ordenada = true;
			++contador_general;
		}
	}
	if (ordenada) cout << "La primera linia ordenada creixentment es la " << contador_general <<'.'<<endl;
	else cout << "No hi ha cap linia ordenada creixentment."<<endl;
}
