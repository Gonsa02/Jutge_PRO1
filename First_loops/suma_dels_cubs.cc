#include <iostream>
using namespace std;

int main() {
	int a,b,suma=0;
	while (cin >> a >> b){
		cout << "suma dels cubs entre " <<a<<" i "<<b<<": ";
		while (a<=b){
			suma= suma + (a*a*a);
			++a;
		}
		cout<<suma<<endl;
		suma = 0;
}}
