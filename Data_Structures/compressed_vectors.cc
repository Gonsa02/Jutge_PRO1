#include <iostream>
#include <vector>
using namespace std;

struct Pair {
	int value; int pos;
};

typedef vector<Pair> Com_Vec;

Com_Vec sum(const Com_Vec& v1, const Com_Vec& v2) {

	Com_Vec vec_result;
	int i = 0;
	int j = 0;
	bool end_v1 = false, end_v2 = false;
	Pair p;
	while(not end_v1 and not end_v2) {

		if (v1[i].pos > v2[j].pos) {	
			
			p.value = v2[j].value;
			p.pos = v2[j].pos;
			++j;
		}
		else if (v1[i].pos < v2[j].pos) {

			p.value = v1[i].value;
			p.pos = v1[i].pos;
			++i;
		}
		else {
			p.value = v1[i].value + v2[j].value;
			p.pos = v1[i].pos;
			++i;
			++j;
		}
		if (p.value != 0) vec_result.push_back(p);
		if (i > v1.size()-1) end_v1 = true;
		if (j > v2.size()-1) end_v2 = true;
	}
	if (end_v1 and not end_v2) {
		
		for (int k = j; k < v2.size(); ++k) {
			
			p.value = v2[k].value;
			p.pos = v2[k].pos;
			vec_result.push_back(p);
		}
	}
	else if (not end_v1 and end_v2) {
		
		for (int k = i; k < v1.size(); ++k) {
			
			p.value = v1[k].value;
			p.pos = v1[k].pos;
			vec_result.push_back(p);
		}
	}
	return vec_result;
}

void read(Com_Vec& v) {

	int val, position;
	char c;	
	for (int i = 0; i < v.size(); ++i) {
		cin >> val >> c >> position;
		v[i].value = val;
		v[i].pos = position;
	}
}

void print(Com_Vec& v) {

	cout << v.size();
	for (int i = 0; i < v.size(); ++i) cout << ' ' << v[i].value <<';' << v[i].pos;
	cout << endl;
}

int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int l1, l2;
		cin >> l1;
		Com_Vec v1(l1);
		read(v1);
		cin >> l2;
		Com_Vec v2(l2);
		read(v2);
		Com_Vec result;
		if (l1 != 0 and l2 != 0) result = sum(v1,v2); 
		else if (l1 != 0 and l2 == 0) result = v1;
		else if (l1 == 0 and l2 != 0) result = v2;
		print(result);
	}
}
