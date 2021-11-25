#include <iostream>
using namespace std;

int nwd(int a, int b)
{
    while(a!=b)
    {
       if(a>b)
           a-=b; 
       if(a<b)
           b-=a;
	}
    return a; 
}

void dodaj(int l1, int m1, int l2, int m2)
{
	int a, b, c, l3, m3;
	a = l1 * m2 + l2 * m1;
	b = m1 * m2;
	c = a / b;
	l3 = (a%b)/nwd(a,b);
	m3 = b/nwd(a,b);
	
	cout << "Suma " << l1 << "/" << m1 << " + " << l2 << "/" << m2 << " = ";
    if(c!=0)
        cout<<c<<" ";
    if(l3!=0)
        cout<< l3 << "/" << m3 << endl;
}

int main()
{
	int l1, m1, l2, m2;

	do
	{
		cout << "Podaj l1: ";
		cin >> l1;
        cout << "Podaj m1: ";
		cin >> m1;
        cout << "Podaj l2: ";
		cin >> l2;
        cout << "Podaj m2: ";
		cin >> m2;
	}
	while((l1<=0)||(m1<=0)||(l2<=0)||(m2<=0));

	dodaj(l1, m1, l2, m2);
    return 0;
}
//Karol Walczyszyn
