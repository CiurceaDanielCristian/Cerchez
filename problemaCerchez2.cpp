/*  Un program care sa ajute un copil de clasa pregatitoare
    sa efectueze adunari cu numere mai mici decat 10
*/

#include<iostream>
#include<cstdlib>

using namespace std;

int main() {

	int raspuns;
	char optiune;
	while (1) {
		cout << "Dani, esti pregatit sa incepi? y or n" << endl;
		cin >> optiune;
		if (optiune == 'y') {
			int termen1 = rand() % 9 + 1, termen2 = rand() % 9 + 1;
			cout << termen1 << "+" << termen2 << "=";
			cin >> raspuns;
			if (raspuns == termen1 + termen2) {
				cout << "Bravoo Dani"<<endl;
			}
			else
			{
				cout << "Gresit"<<endl;
			}
		}
		else {
			break;
		}
	}

}