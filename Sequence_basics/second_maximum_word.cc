#include <iostream>
using namespace std;

int main(){
    string show="", upper="", word;
    while(cin>>word){
    if((word != show) and (word != upper)){
     if (show ==""){
         show = word;
         upper = upper;
    }
    if ((show == upper) and (word < upper)) show = word;
    if ((show < word)and(word<upper)) show = word;
    if (word > upper) {
        if(upper > show) show = upper;
        upper = word;
    }
    }}
    cout << show <<endl;
}
