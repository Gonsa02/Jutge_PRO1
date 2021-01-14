#include <iostream>
using namespace std;

int main(){
	int n,memory, cifras=0;
	cin >> n;
	memory = n;
	while(memory/10 !=0 or memory%10 !=0){	
		memory = memory/10;
		++cifras;
	}
	if (cifras%2==0 and n!=0){
		int first_half, second_half, exponent=1;
		cifras = cifras/2;

		for(int i=1; i<=cifras; ++i){
			exponent = exponent*10;
		}

		second_half = n%exponent;
		first_half = n/exponent;

		int first_sum=0, second_sum=0;
		while(first_half/10 !=0 or first_half%10 !=0){
			first_sum += first_half%10;
			first_half = first_half/10;
		}
		while(second_half/10 !=0 or second_half%10 !=0){
			second_sum += second_half%10;
			second_half = second_half/10;
		}
		if (first_sum > second_sum) cout << first_sum <<" > "<< second_sum<<endl;
		else if (first_sum < second_sum) cout << first_sum <<" < "<< second_sum<<endl;
		else cout << first_sum << " = " << second_sum << endl;

	}
	else cout <<"nothing"<<endl;
}
