#include <iostream>
#include <vector>
using namespace std;

struct Time {
	int hour, minute, second;
};

void increase(Time& r) {

	++r.second;
	if (r.second == 60) {
		r.second = 0;
		++r.minute;
	}
	if (r.minute == 60) {
		r.minute = 0;
		++r.hour;
	}
	if (r.hour == 24) {
		r.hour = 0;
		r.minute = 0;
		r.second = 0;	
	}
}

void decrease(Time& r) {

	--r.second;
	if (r.second == -1) {
		r.second = 59;
		--r.minute;
	}
	if (r.minute == -1) {
		r.minute = 59;
		--r.hour;
	}
	if (r.hour == -1) {
		r.hour = 23;
		r.minute = 59;
		r.second = 59;	
	}
}

void one_second(Time& t1, Time& t2) {

	increase(t1);
	decrease(t2);

}

int main() {

	Time t;
	while (cin >> t.hour >> t.minute >> t.second) {
		Time t1 = t, t2 = t;
		one_second(t1, t2);
		cout << t1.hour << ' ' << t1.minute << ' ' << t1.second << endl;
		cout << t2.hour << ' ' << t2.minute << ' ' << t2.second << endl;
	}
}
