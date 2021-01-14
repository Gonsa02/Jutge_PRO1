#include <iostream>
#include <vector>
using namespace std;

string exit(int p, vector<int>& v) {

	vector<bool> aux(v.size(), false);
	
	while (not aux[p]) {

		aux[p] = true;

		if (v[p] >  0 and p+v[p] >= v.size()) return "right";
		else if (v[p] < 0 and p+v[p] < 0) return "left";

		
		p += v[p];
	}

	return "never";
}
