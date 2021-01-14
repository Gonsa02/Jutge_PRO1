#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double d;
	while(cin>>d){
		cout.precision(6);
		cout<<fixed<<sin(d*((M_PI)/180))<<' '<<cos(d*((M_PI)/180))<<endl;
	}
}
