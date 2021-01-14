#include <iostream>
using namespace std;

int main(){
	int n, sqrt;
	while(cin>>n){
		int i=1;
		cout << "divisors of "<< n <<":";
		while(i*i<=n){
			if (n%i ==0) cout <<' '<<i;
			++i;
		}
		sqrt=i;
		while(i !=0){
            if ((n%i ==0)and(n/i >= sqrt)) cout <<' '<<n/i;
            --i;
        }
        cout <<endl;
	}
}
