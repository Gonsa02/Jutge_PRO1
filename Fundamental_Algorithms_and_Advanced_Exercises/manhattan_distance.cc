#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct Point {
	int x; int y; int dis;
};

typedef vector<Point> Map;

Map read_points() {
	int n;
	cin >> n;
	Map m(n);
	for (int i = 0; i < n; ++i) cin >> m[i].x >> m[i].y;
	return m;
}

void compute_distance(Map& m, const Point& origin) {

	for (int i = 0; i < m.size(); ++i) m[i].dis = abs(m[i].x-origin.x) + abs(m[i].y-origin.y);
}

bool compare(Point a, Point b) {

	if (a.dis != b.dis) return a.dis < b.dis;
	else if (a.x != b.x) return a.x < b.x;
	return a.y < b.y;
}

void print(const Map& map) {

	int index = 0;
	while(index < map.size()) {
		int i = map[index].dis;
		bool first = true;
		while (map[index].dis == i) {
			if (first) {
				cout << "points at distance " << i << endl;
				first = false;
			}
			cout << map[index].x << ' ' << map[index].y << endl;
			++index;
		}
	}
}

int main() {

	Point origin;
	origin.dis = 0;
	cin >> origin.x >> origin.y;
	Map map = read_points();
	compute_distance(map, origin);
	sort(map.begin(), map.end(), compare);
	if (map.size() != 0) print(map);
}
