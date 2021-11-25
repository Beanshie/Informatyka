#include <iostream>
using namespace std;

double potegowanie(int l, int p)
{
    if (p==0) return 1;
   else return l*potegowanie(l,p-1);
}

int main()
{
    int licz,pot;

    cout << "Podaj liczby wieksze od 0" << endl;

    do {
        cout << "Podaj liczbe do spotegowania: ";
        cin >> licz;
        cout << "Podaj potege tej liczby: ";
        cin >> pot;
    } while ((licz <= 0) && (pot <= 0));

    cout << endl << "Wynik to: " << potegowanie(licz, pot);
    
    return 0;
}
