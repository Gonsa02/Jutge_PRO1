#include <iostream>
#include <cmath>
using namespace std;

struct Point {
	double x, y;
};

double dist(const Point& a,  const Point& b) {

	double dist_x = a.x - b.x, dist_y = a.y - b.y;
	return sqrt(pow(dist_x,2)+pow(dist_y,2));

}
