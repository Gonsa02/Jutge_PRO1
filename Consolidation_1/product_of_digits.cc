#include <iostream>
using namespace std;

int main(){
	int n, result=1;
	while(cin>>n){
		if(n==0){
		       	cout<<"The product of the digits of "<<n<<" is "<<n<<'.'<<endl;
			cout<<"----------"<<endl;
		}
		else if(n/10 == 0 and n%10 !=0){
			cout<<"The product of the digits of "<<n<<" is "<<n<<'.'<<endl;
			cout<<"----------"<<endl;
		}
		else{
		while(n/10!=0){
			result=1;
			cout<<"The product of the digits of "<<n<<" is ";
			while(n/10!=0 or n%10!=0){
			result *= n%10;
			n=n/10;
			}
		cout<<result<<'.'<<endl;	
		n=result;	
		}
		cout<<"----------"<<endl;
		}
	}
}
