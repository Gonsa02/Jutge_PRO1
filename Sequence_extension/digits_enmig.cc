#include <iostream>
using namespace std;

int main(){
	int n, compare, i=0;
	char winner='=';
	bool first = true, finished = false;
	cin>>n;
	n=n*2;
	while(!finished and i<n){
		int fitxa = 0;
		cin>>fitxa;
		int digits=0, memory=fitxa;
		while(memory != 0){
			memory /= 10;
			++digits;
		}
		if (digits%2==0 and i%2==0 and !finished and fitxa!=0){
			finished=true;
		       	winner='B';
		}
		else if (digits%2==0 and i%2!=0 and !finished and fitxa!=0){
		       	winner='A';
			finished =true;
		}
		int medium=0;
		if (fitxa<10) medium = fitxa;
		else {
		for(int j=0; j<(digits/2); ++j){
			fitxa /= 10;
			medium = fitxa%10;
		}}
		if (first) {
			compare = medium;
			first = false;
		}
		if (medium != compare and i%2==0 and !finished){
		       	winner='B';
			finished = true;
		}
		else if (medium != compare and i%2!=0 and !finished){ 
			winner='A';
			finished=true;
		}
		++i;
	}
	cout<<winner<<endl;
}
