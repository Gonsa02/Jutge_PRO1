#include <vector>
using namespace std;

int common_elements(const vector<int>& X, const vector<int>& Y) {
	
	int common = 0;
	int i = 0;
	int j = 0;

	while (i < X.size() and j < Y.size()) {
		
		if (X[i] == Y[j]) {
			
			++common;
			++i;
			++j;

		}

		else if (X[i] > Y[j]) ++j;
		else if (X[i] < Y[j]) ++i;
	}

	return common;
}
