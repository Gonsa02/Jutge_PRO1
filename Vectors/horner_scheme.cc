#include <iostream>
#include <vector>
using namespace std;

int evaluate(const vector<int>& p, int x) {

	int eval = 0;
	int degree = p.size() - 1;

	for(int i = degree; i >= 0; --i) {
		
		eval = eval*x + p[i];
	}

	return eval;
}
