#include <iostream>
#include <vector>
using namespace std;

double scalar_product(const vector<double>& u, const vector<double>& v) {

	double k = 0;

	for (int i = 0; i <  u.size(); ++i) {

		k += u[i]*v[i];

	}

	return k;
}
