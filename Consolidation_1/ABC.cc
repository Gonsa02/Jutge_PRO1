#include <iostream>
using namespace std;

int main(){
        int x, y, z;
	string text;
        cin >> x >> y >> z >> text;
        
	int max = x, mid = x, min = x;
	
	if (y > max) max = y;
	if (z > max) max = z;
	
	if (y < min) min = y;
	if (z < min) min = z;
	
	if ((x==max and y == min) or (y==max and x == min)) mid = z;	
	else if ((x==max and z == min) or (z==max and x == min)) mid = y;	

	for(int i=0; i<3; ++i){
		if (text[i] == 'A')cout << min;
		else if (text[i] == 'B') cout << mid;
		else if (text[i] == 'C') cout << max;
		if (i!=2) cout<<' ';	
	}
	cout <<endl;
}
