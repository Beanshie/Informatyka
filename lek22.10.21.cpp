#include <iostream>
using namespace std;

int rek_NWD(int a, int b)
{
	if(a==b)
		return a;
	if(a>b)
		return rek_NWD(a-b,b);
	if(a<b)
		return rek_NWD(a,b-a);
}

int main() 
{
	float l,m,l2,m2, w;
	
	do{
		cout<<"Podaj licznik skrocenia: ";
		cin >> l;
		cout << "Podaj mianownik do skrocenia: ";
		cin >> m;
	}while((l<=0)||(m<=0));
	
	l2=rek_NWD(l,m);
	m2=rek_NWD(l,m);
	
	cout<<endl<<"Ulamek: "<<l/l2<<"/"<<m/m2<<endl;
	cout<<"Liczba po przecinku: "<<(l/l2)/(m/m2);
	return 0;
}
//Karol Walczyszyn
