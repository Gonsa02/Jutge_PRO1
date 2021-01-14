#include <iostream>
#include <cmath>
using namespace std;

double euclidean_distance(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    string route;
    while (cin >> route) {
        double x0, y0, x1, y1, x2, y2;
        double total_distance = 0;
        cin >> x0 >> y0;
        x1 = x0;
        y1 = y0;
        
        bool in_origin = false;
        
        while (not in_origin) {
            cin >> x2 >> y2;
            
            total_distance += euclidean_distance(x1, y1, x2, y2);
            x1 = x2;
            y1 = y2;
            
            in_origin = (x2 == x0 and y2 == y0);
        }
        
        cout << "Route " << route << ": " << total_distance << endl;
    }
}
