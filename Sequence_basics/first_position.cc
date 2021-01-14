#include <iostream>
using namespace std;

int main(){
	int n, counter=1;
	bool follow=true;
	while((cin >>n)and(follow==true)){
		if (n % 2 !=0){
			++counter;
		}else{
			follow=false;
		}}
	cout << counter <<endl;
}
