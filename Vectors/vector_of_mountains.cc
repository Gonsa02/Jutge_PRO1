#include <iostream>
#include <vector>
using namespace std;

vector<int> obtain_peaks(const vector<int>& v) {

	vector<int> peaks(0);

	for (int i = 0; i < v.size(); ++i) {
		
		if (i > 0 and i < v.size()-1) if (v[i-1] < v[i] and v[i] > v[i+1]) peaks.push_back(v[i]);
	}

	return peaks;
}

int main() {

	int n;
	cin >> n;

	vector<int> route_profile(n);

	for(int i = 0; i < n; ++i) {
		
		cin >> route_profile[i];

	}

	vector<int> peaks = obtain_peaks(route_profile);

	cout << peaks.size() << ":";

	for (int i = 0; i < peaks.size(); ++i) {

		cout <<' '<< peaks[i];

	}
	cout << endl;

	bool nothing = true;

	for (int i = 0; i < peaks.size(); ++i) {
		
		if (peaks[i] > peaks[peaks.size()-1]) {
			
			nothing = false;
			cout << peaks[i];
			if (i != peaks.size()-2) cout <<' ';

		}
	}

	if (nothing) cout <<'-';

	cout << endl;
}
