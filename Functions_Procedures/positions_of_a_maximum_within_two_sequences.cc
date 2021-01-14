#include <iostream>
using namespace std;

void infoSequence(int& max, int& pos){

	int num, counter=1;
	cin>>num;
	max=num;
	while (num!=0){
		if (num>=max){

			max=num;
			pos=counter;
		}
		++counter;
		cin>>num;
	}
}

int main(){
	
	int max, pos;
	infoSequence(max,pos);
	bool find = false;
	int num, counter=0;
	cin>>num;
	while(!find and num!=0){
		++counter;	
		if (num==max) find = true;
		cin>>num;
	}

	cout<<max<<' '<<pos<<' ';
	if (find) cout<<counter<<endl;
	else cout<<'-'<<endl;
	

}
