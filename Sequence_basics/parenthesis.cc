#include <iostream>
using namespace std;

int main(){
	char p;
	int counter_open=0, counter_close=0;
	bool correct = true;

	while(cin >>p){
		if (p=='(') ++counter_open;
		else if(p==')') ++counter_close;
		if (counter_close > counter_open) correct = false;
	}
	if (counter_open == counter_close and correct) cout <<"yes"<<endl;
	else cout <<"no"<<endl;
}
