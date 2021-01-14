#include <iostream>
using namespace std;

int read_expression() {
    char in;
    cin >> in;
    if (in != '(') return in - '0';
    int a = read_expression();
    cin >> in;
    int b = read_expression();
    int result = 0;
    if (in == '+') result = a + b;
    else if (in == '*') result = a*b;
    else if (in == '-') result = a - b;
    cin >> in;
    return result;
}

int main() {
    cout << read_expression() << endl;
}
