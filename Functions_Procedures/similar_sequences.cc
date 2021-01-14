#include <iostream>
using namespace std;

void info_sequence(int& sum,int& last){

	int num;
	cin>>num;
	while(num!=0){
		sum += num;
		last = num;
		cin>>num;
	}
}


int main(){
	int first_sum=0, first_last, current_sum=0, current_last, num;
	int counter=1;
	cin>>num;
	first_sum += num;
	first_last = num;
	info_sequence(first_sum,first_last);
	cin>>num;
	while(num!=0){
		current_sum += num;
		current_last = num;
		info_sequence(current_sum, current_last);
		if (first_sum == current_sum and first_last == current_last) ++counter;
		current_sum = 0;
		cin>>num;
	}
	cout <<counter<<endl;
	
}
