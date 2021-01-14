#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

struct Point {
	double x, y;
};

double dist(const Point& a,  const Point& b) {

	double dist_x = a.x - b.x, dist_y = a.y - b.y;
	return sqrt(pow(dist_x,2)+pow(dist_y,2));

}

void move(Point& p1, const Point& p2) {
	p1.x += p2.x; p1.y += p2.y;
}

struct Circle {
	Point center;
        double radius;
};

void scale(Circle& c, double sca) {
	c.radius *= sca;
}
void move(Circle& c, const Point& p) {
	move(c.center, p);
}

bool is_inside(const Point& p, const Circle& c){
	
	int distance = dist(c.center, p);
	if (distance > c.radius) return false;
	else return true;

}
