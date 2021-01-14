#include <iostream>
using namespace std;

void swap (int& n, int& aux) {

		string x;

		while (cin >> x) {

			++n;
			swap(n, aux);
			++aux;
			if (2*aux > n) cout << x << endl;
		}
}

int main() {
	
		int n=1, aux=0;
		swap(n,aux);

}
