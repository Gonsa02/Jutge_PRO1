#include <iostream>
#include <vector>
using namespace std;

struct Clock {
	int h;
	int m;
	int s;
};

Clock midnight() {

	Clock c;
	c.h = 0;
	c.m = 0;
	c.s = 0;
	return c;

}

void increase(Clock& r) {

	++r.s;
	if (r.s == 60) {
		r.s = 0;
		++r.m;
	}
	if (r.m == 60) {
		r.m = 0;
		++r.h;
	}
	if (r.h == 24) {
		r.h = 0;
		r.m = 0;
		r.s = 0;	
	}
}

void print(const Clock& r) {

	if (r.h >= 10) cout <<r.h;
	else cout <<'0'<<r.h;
	cout <<':';
	if (r.m >= 10) cout <<r.m;
	else cout <<'0'<<r.m;
	cout <<':';
	if (r.s >= 10) cout <<r.s;
	else cout <<'0'<<r.s;
	cout << endl;
}
