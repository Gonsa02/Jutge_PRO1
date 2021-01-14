#include <iostream>
using namespace std;

int main(){
    int b, n, counter=1;
    while (cin >> b >>n){
        if (n >= b){
            while(n/b !=0){
                n = n/b;
                ++counter;}}
        else if (b > n) {
            while((n%b !=0)and(n-b >0)){
                n = n/b;
                ++counter;}}
        cout << counter << endl;
        counter = 1;
}}
