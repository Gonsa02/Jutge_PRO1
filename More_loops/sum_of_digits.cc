#include <iostream>
using namespace std;

int main(){
        int a, result=0;
        while (cin >> a){
            cout << "The sum of the digits of "<<a;
            while ((a/10 != 0) or (a%10 !=0)){
                result = result + a%10;
                a = a/10;
            }
            cout << " is "<<result<<'.'<<endl;
            result = 0;
}}
