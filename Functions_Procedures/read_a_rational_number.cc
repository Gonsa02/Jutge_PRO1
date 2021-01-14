#include <iostream>
using namespace std;

int mcd(int a, int b) {

    if(b == 0) return a;
    return mcd(b, a%b);
}

void read_rational(int& num, int& den){
	
	int result;
	char c;
	cin >> num >> c >> den;
	result = mcd(num, den);
	num = num/result;
	den = den/result;

}
