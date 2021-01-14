#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<double> difference(const vector<double>& v1, const vector<double>& v2) {

	vector<double> v;
	int i = 0, j = 0;
	bool remain = false;
	if (v1.size() != 0 and v2.size() == 0) remain = true;
	while (i < v1.size() and j < v2.size()) {
		if (v.size() != 0 and v1[i] < v2[j] and v1[i] != v[v.size()-1] and v1[i] != v1[i-1]) {
			v.push_back(v1[i]);
			++i;
		}
		else if (v.size() == 0 and v1[i] < v2[j] and v1[i] != v2[j-1]) {
			v.push_back(v1[i]);
			++i;
		}
		else if (v1[i] > v2[j]) ++j;
		else if (v1[i] == v2[j]) {
			++i;
			++j;
		}
		else ++i;
		if (i < v1.size() and j >= v2.size()) remain = true;
	}
	if (remain) for (int z = i; z < v1.size(); ++z) if (v1[z-1] != v1[z]) v.push_back(v1[z]);
	return v;
}
