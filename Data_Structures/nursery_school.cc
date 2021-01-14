#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Teacher {
	string name;
	int sweet = 0;
	int carrot = 0;
};

typedef vector<Teacher> Historial;

Historial read_all(int n) {

	Historial h(n);

	for (int i = 0; i < n; ++i) cin >> h[i].name >> h[i].sweet >> h[i].carrot;

	return h;
}

bool order(Teacher t1, Teacher t2) {
	if (t1. sweet != t2.sweet) return t1.sweet > t2.sweet;
	else if (t1.carrot != t2.carrot) return t1.carrot > t2.carrot;
	else if (t1.name.size() != t2.name.size()) return int(t1.name.size()) < int(t2.name.size());
	else for (int i = 0; i < t1.name.size(); ++i) if (t1.name[i] != t2.name[i]) return t1.name[i] < t2.name[i];
	return true;
}

void print(Historial h) {
	for (int i = 0; i < h.size(); ++i) cout << h[i].name << endl;
}

int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int n2;
		cin >> n2;
		Historial h = read_all(n2);
		sort(h.begin(), h.end(), order);
		print(h);
		cout << endl;
		}
}

