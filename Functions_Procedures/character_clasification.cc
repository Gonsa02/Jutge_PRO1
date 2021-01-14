#include <iostream>
using namespace std;

void escriu_linia(char c, string s, bool b) {
	cout << s << "('" << c << "') = ";
        if (b) cout << "cert" << endl;
        else cout << "fals" << endl;
}

bool procediment(string a, char c){
	if (a == "lletra" and ((int(c)>=65 and int(c)<=90) or (int(c)>= 97 and int(c)<=122))) return true;
	else if (a == "vocal" and ((int(c)>=65 and int(c)<=90) or (int(c)>=97 and int(c)<=122)) and(int(c)==97 or int(c)==101 or int(c)==105 or int(c)==111 or int(c)==117 or int(c)==65 or int(c)==69 or int(c)==73 or int(c)==79 or int(c)==85)) return true;
	else if (a == "consonant" and ((int(c)>=65 and int(c)<=90) or (int(c)>=97 and int(c)<=122)) and !(int(c)==97 or int(c)==101 or int(c)==105 or int(c)==111 or int(c)==117 or int(c)==65 or int(c)==69 or int(c)==73 or int(c)==79 or int(c)==85)) return true;
	else if (a =="majuscula" and int(c)>=65 and int(c)<=90) return true;
	else if (a =="minuscula" and int(c)>=97 and int(c)<=122) return true;
	else if (a =="digit" and int(c)>=48 and int(c)<=57) return true;
	else return false;
}

int main(){
	char c;
	cin>>c;
	string text[6] = {"lletra","vocal","consonant","majuscula","minuscula","digit"};
	for(int i=0; i<=5; ++i) escriu_linia(c, text[i], procediment(text[i], c));
}
