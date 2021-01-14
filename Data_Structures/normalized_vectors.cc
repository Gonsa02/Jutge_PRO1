#include <iostream>
#include <vector>
using namespace std;

struct Point {
	double x,y;
};

bool barycenter (const vector<Point>& v, Point& b) {

	double x = 0, y = 0;
	int z=0;
	for (int i = 0; i < v.size(); ++i) {
		x += v[i].x;
		y += v[i].y;
		++z;
	}
	x /= double(z);
	y /= double(z);
	b.x = x;
	b.y = y;

	for (int i = 0; i < v.size(); ++i) if (v[i].x == b.x and v[i].y == b.y) return true;
	return false;
}

vector<Point> read_vector(int n) {

	vector<Point> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i].x >> v[i].y;
	return v;

}

int check(const vector<Point>& v) {

	bool found = false;
	int i = 1;
	Point aux = v[0];
	while (not found and i < v.size()) {

		if (aux.x != v[i].x or aux.y != v[i].y) found = true;
		++i;
	}
	if (not found) return 1;
	double x = 0, y = 0;
	for (int j = 0; j < v.size(); ++j) {
		x+=v[j].x;
		y+=v[j].y;
	}
	if (x != y) return 2;
	return 0;

}

int main() {

	int n;
	while (cin >> n) {
		vector<Point> v = read_vector(n);
		Point p;
		bool verify = barycenter(v,p);
		cout.precision(2);
		cout << fixed << "barycenter: " <<'(' << p.x <<','<< p.y << ')' << endl;
		int i = check(v);
		if (i == 0 and verify) i = 3;
		if (i == 0) cout << "normalized vector" << endl;
		else {
			cout << "property " << i << " does not hold" << endl;
		}
	}
}
