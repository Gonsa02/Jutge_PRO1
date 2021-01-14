#include <iostream>
using namespace std;

int main(){
        int base, ex, result=1;
        while (cin >> base >> ex){
        if ((ex !=0)and(ex !=1)){
        for(int i=1; i<=ex; ++i){
            result = result * base;
        }}
        else if (ex == 1){
            result = base;
        }
        else if (ex == 0){
            result = 1;
        }
        cout << result << endl;
        result = 1;
}}
