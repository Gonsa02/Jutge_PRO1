#include <iostream>
#include <vector>
using namespace std;

void calcula_posicions(const vector<double>& vector, int& p, int& q) {
    int n = vector.size();
    // Fem la cerca
    double max = vector[0];
    for (int i = 1; i < n; ++i) {
        if (vector[i] > max) {
            max = vector[i];
            q = p;
            p = i;
        }
    }
    
    // Calculem simpatia
    double simpatia = vector[q] + vector[p];
    for (int i = q + 1; i < p; ++i) {
        simpatia += vector[i];
    }
    cout << simpatia/(p - q + 1) << endl;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    int n; 
    while (cin >> n) {
        int p = 0, q = 0;
        // Declarem i llegim vector
        vector<double> vector(n);
        for (int i = 0; i < n; ++i)
            cin >> vector[i];
        
        calcula_posicions(vector, p, q);
    }
}
