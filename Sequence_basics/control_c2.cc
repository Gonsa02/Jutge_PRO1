#include <iostream>
using namespace std;

int main(){
	int n, numbers, counter=0;
	bool enter = true;
	while(cin >> n){
		if ((n%1000 == numbers)and(enter == false)) {
			cout<< n << endl;
			++counter;
		}
		if (enter == true){
			enter = false;
		       	numbers = n%1000;
			cout << "nombres que acaben igual que " <<n<<':'<<endl;
		}
	}
	cout << "total: "<<counter << endl;
}
