#include <iostream>
#include <vector>
using namespace std;

int position_maximum(const vector<double>& v, int m) {

	double max = v[0];
	int position = 0;
	for (int i = 1; i <= m; ++i) {
		
		if (v[i] > max) {
			
			max = v[i];
			position = i;

		}
	}

	return position;

}
