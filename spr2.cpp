#include <iostream>
using namespace std;

int NWD(int a, int b)
{
    while (a!=b)
    {
        if(a>b)
            a-=b;
        if(a<b)
            b-=a;
    }
    return a;
}

void dodaj(int L1, int M1, int L2, int M2)
{
	int a, b, C, L3, M3;
	a = L1 * M2 + L2 * M1;
	b = M1 * M2;
	C = a / b;
	L3 = (a%b)/NWD(a,b);
	M3 = b/NWD(a,b);
	
	cout << "Suma " << L1 << "/" << M1 << " + " << L2 << "/" << M2 << " = ";
    if(C!=0)
        cout<<C<<" ";
    if(L3!=0)
        cout<< L3 << "/" << M3 << endl;
}

main()
{
    int l1,m1,l2,m2;
    cout<<"Podaj"<<endl;
    cout<<"Licznik pierwszej liczby: ";
    cin>>l1;
    cout<<"Mianownik pierwszej liczby: ";
    cin>>m1;
    cout<<"Licznik drugiej liczby: ";
    cin>>l2;
    cout<<"Mianownik drugiej liczby: ";
    cin>>m2;
    cout<<endl;
    dodaj(l1,m1,l2,m2);
}