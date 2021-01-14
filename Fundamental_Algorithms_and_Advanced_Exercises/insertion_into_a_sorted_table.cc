#include <iostream>
#include <vector>
using namespace std;

void insert(vector<double>& v) {

	int last = v.size()-1;

	if (v[last] < v[last-1]) {

		bool more = true;

		while(more and last > 0) {
			
			swap(v[last], v[last-1]);
			--last;
			if (v[last] > v[last-1]) more = false;
			
		}
	}

}
