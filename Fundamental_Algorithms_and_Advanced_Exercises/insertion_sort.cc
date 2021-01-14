#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<double>& v) {


	for (int position = 1; position < v.size(); ++position) {

		if (v[position] < v[position-1]) {
			
			int i = position;

			while(i > 0 and v[i] < v[i-1]) {

				swap(v[i],v[i-1]);
				--i;
			}

		}
	}
}
