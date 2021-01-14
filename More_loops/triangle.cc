#include <iostream>
using namespace std;

int main() {
    int times, i=1, print_times=0;
    cin>>times;
    while (i<=times){
        while(print_times < i){
            cout <<'*';
            ++print_times;
        }
            cout<<endl;
            print_times =0;
            ++i;
    }}
