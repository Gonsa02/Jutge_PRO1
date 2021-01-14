#include <iostream>
#include <vector>
using namespace std;

vector<bool> pos_ramps (const vector<int>&  V) {

	vector<bool> vec_bool(V.size());

	for (int i = 0; i < V.size()-2; ++i) if ((V[i]<V[i+1] and V[i+1] < V[i+2]) or (V[i]>V[i+1] and V[i+1]>V[i+2])) vec_bool[i]=true;

	return vec_bool;

}

int conflict (const vector <bool>& B) {

	int counter = 0;
	bool one_found = false;

	for (int i = 0; i < B.size(); ++i) {

		if (B[i] == 1 and B[i+1]) ++counter; 
		if (B[i] == 1 and B[i+2]) ++counter;
	}
	return counter;
}

int main() {
	
	int n;
	while(cin >> n) {

		vector<int> vec(n);
		for (int i = 0; i < n; ++i) {
		
			cin >> vec[i];

		}

	vector<bool> vector_bool = pos_ramps(vec);

	int counter = conflict(vector_bool);

	cout <<"positions with a ramp:";

	for (int i = 0; i < vector_bool.size(); ++i) if (vector_bool[i] == true) cout<<' '<<i;
	cout << endl;
	cout <<"potentially conflictive: " << counter << endl;
	cout <<"---" << endl;
	}
}
