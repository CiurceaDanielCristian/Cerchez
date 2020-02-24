/*Fie n un numar natural nenul. Sa se afiseze pe ecran o secventa de lungime n, 
construita dupa procedeul ilustart mai jos:
-daca n=6 secventa afisata este: 123321;
-daca n=7 secventa afisata este: 1234321;
*/


#include<iostream>

using namespace std;

int main() {

    int numarNatural;
    cout << "Introduceti numarul natural"<<endl;
    cin >> numarNatural;

     
    for (int i = 1; i <= numarNatural; i++) {
            if (i > numarNatural / 2) {
                cout << numarNatural - i + 1;
            }
            else {
                cout << i;
            }
    }
    




}