#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Track {
  string artist, title, genre;
  int year;
};

typedef vector<Track> Library;

bool comp(const Track &a, const Track &b) {
	if (a.artist != b.artist) return a.artist < b.artist;
	if (a.year != b.year) return a.year < b.year;
	return a.title < b.title;
}

vector<Track> read_tracks(int n) {
	Library lib(n);
	for (int i = 0; i < n; ++i) {
		cin >> lib[i].artist;
		cin >> lib[i].title;
		cin >> lib[i].genre;
		cin >> lib[i].year;
	}
	return lib;
}

void print_track(const Track &t) {
  cout << t.artist;
  cout << " (" << t.year;
  cout << ") " << t.title << " (" << t.genre << ")" << endl;
}

int main() {
	int n;
	cin >> n;
	Library lib = read_tracks(n);
	sort(lib.begin(), lib.end(), comp);
	vector<string> search;
	string gender;
	while (cin >> gender) search.push_back(gender);
	for (int i = 0; i < search.size(); ++i) for (int j = 0; j < lib.size(); ++j) if (search[i] == lib[j].genre) print_track(lib[j]);
}
