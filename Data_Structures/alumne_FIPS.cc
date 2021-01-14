#include <iostream>
#include <vector>
using namespace std;

struct Assignatura {
	string nom;
	double nota;
};

struct Alumne {
	string nom;
	int dni;
	vector<Assignatura> ass;
};


double nota(const vector<Alumne>& alumns, int dni, string nom) {

	bool found = false;
	int i = 0;

	while (i < alumns.size() and not found) {
		found = (alumns[i].dni == dni);
		++i;
	}
	--i;

	int j = 0;
	if (not found) return -1;
	else {
		found = false;
		while (j < alumns[i].ass.size() and not found) {

			found = (alumns[i].ass[j].nom == nom);
			++j;

		}
	}
	--j;

	if (found) return alumns[i].ass[j].nota;
	else return -1;
}

double mitjana(const vector<Assignatura>& ass) {

	double s = 0;
	int n = 0;
	for (int i = 0; i < ass.size(); ++i) {

		if (ass[i].nota != -1) {
			s +=ass[i].nota;
			++n;
		}
	}

	if (n == 0) return -1;
	else return s/n;
}

void compta(const vector<Alumne>& alumns, int dni, string nom, int& com) {

	double notabase = nota(alumns, dni, nom);
	for (int i = 0; i < alumns.size(); ++i) {
		if (mitjana(alumns[i].ass) > notabase) ++com;
	}
}

int main() {

	int n;
	cin >> n;
	vector<Alumne> dades(n);
	for (int i = 0; i < n; ++i) {

		cin >> dades[i].nom >> dades[i].dni;

		int a;
		cin >> a;
		vector<Assignatura> assignatura(a);
		for (int j = 0; j < a; ++j) {

			cin >> assignatura[j].nom;
			cin >> assignatura[j].nota;

		}
		dades[i].ass = assignatura;
	}

	int dni;

	while(cin >> dni) {

		string assignatura;
		cin >> assignatura;
		int com = 0;

		compta(dades, dni, assignatura, com);

		cout << com <<endl;
	}
}
