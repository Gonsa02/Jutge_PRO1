#include <iostream>
using namespace std;

int main(){
	int contador=-2;
	string a;
	bool start = false, finish = false;
	while((cin>>a)and(finish ==false)){
		if (a == "beginning") start =true;
		if (start and finish ==false) ++contador;
		if (a == "end") finish = true;
	}
	if (start and finish and contador >=0) cout<<contador<<endl;
	else cout<<"wrong sequence"<<endl;
}
