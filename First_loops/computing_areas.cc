#include <iostream>
using namespace std;

int main(){
	int n;
        double	area, length, width, radius;
	string info;
	cin >>n;
	for (int i=0; i<n; ++i){
		cin >> info;
		if (info=="rectangle"){
			cin >> length >>width;
			area = length*width;
		}
		else if(info=="circle"){
			cin >> radius;
			area = 3.14159265358979*(radius*radius);
		}
		cout.precision(6);
		cout << fixed << area<<endl;
		area=0;	
		length=0;
		width=0;
	}}
