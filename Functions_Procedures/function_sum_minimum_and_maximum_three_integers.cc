#include <iostream>
using namespace std;

int sum_min_max(int x, int y, int z){
	int min, max;
	if (x >= y and x>=z) max=x;
	else if (y>x and y>=z) max=y;
	else max=z;
	if (x <=y and x<=z) min=x;
	else if (y<x and y<=z) min=y;
	else min=z;
	return max + min;
}
