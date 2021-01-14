#include <iostream>
using namespace std;

int main(){
        int n, plus, ast, i=0;
        cin >>n;
        n=n-1;
        plus = n-1;
        ast = 0;
        while (i<=n){
            for(int times=0; times<=plus;){
                cout <<'+';
                ++times;
            }
            plus = plus -1;
            cout << '/';
            for(int times=0; times<ast;){
                cout <<'*';
                ++times;
            }
            ++ast;
            cout<<endl;
                ++i;
        }
}
