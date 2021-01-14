#include <iostream>
using namespace std;

int main(){
        int b,a, result=0;
        cin >> b;
        while (cin >> a){
            cout<<a;
            while ((a/b != 0) or (a%b !=0)){
                result = result + a%b;
                a = a/b;
            }
            cout <<": "<<result<<endl;
            result = 0;
}}
