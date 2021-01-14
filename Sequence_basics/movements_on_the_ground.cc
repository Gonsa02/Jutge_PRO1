#include <iostream>
using namespace std;

int main(){
	int x=0,y=0;
	char m;
	while(cin>>m){
		if (m=='n') --y;
		else if(m=='s') ++y;
		else if(m=='e') ++x;
		else if(m=='w') --x;
	}
	cout <<'(' << x <<", " <<y<<')'<<endl;
}
