#include <iostream>
#include <vector>

using namespace std;

// change this definition according to
// the vector type to be sorted
typedef int obj;
typedef vector<obj> vect;

// this is the sorting criteria
bool criteria(const obj& a, const obj& b) {
    return a < b;
}

void MergeSort(vect& v, int esq, int dre) {
    if (esq != dre) {
        int half = (esq + dre) / 2;

        // we need to get both halves ordered recursively first

        MergeSort(v, esq, half); MergeSort(v, half + 1, dre);

        // from the 2 ordered halves, lets sort the whole vector.
        // on that purpose, we need the boolean function "criteria"

        int i = esq, j = half + 1;
        vect aux;
        while (i <= half or j <= dre) {
            if (j > dre) aux.push_back(v[i]), ++i;
            else if (i > half or criteria(v[j], v[i])) aux.push_back(v[j]), ++j;
            else aux.push_back(v[i]), ++i;
        }

        // we shall now copy the aux vector (sorted) to the original vector

        for (int k = esq; k <= dre; ++k) v[k] = aux[k - esq];
    }
}

int main() {
    int n;
    while (cin >> n) {
        vect v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        MergeSort(v, 0, n - 1);
        for (int i = 0; i < n; ++i) cout << v[i] << ' ';
        cout << endl;
    }
}
