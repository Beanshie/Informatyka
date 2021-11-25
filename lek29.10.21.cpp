
#include <iostream>
using namespace std;

void wczytaj(int &l1, int &m1, int &l2, int &m2)
{
	do
	{
		cout << "Podaj l1, m1, l2 i m2: ";
		cin >> l1 >> m1 >> l2 >> m2;
		cout << endl;
	}
	while((m1<=0)||(m2<=0));
}

int nwd_ite(int a, int b)
{
	while((a!=0)&&(b!=0))
	{
		if(a>b) a=a%b;
		else b=b%a;
	}
	return a+b;
}

int nwd_ite(int a, int b)
{
	while(a!=b)
	{
		if(a>b) a-=b;
		else b-=a; 	
	}
	return a;
}
//-------------------------------------------------------------------
void roznica(int l1, int m1, int l2, int m2)
{
	int a, b, c, l3, m3;
	a = l1 * m2 - l2 * m1;
	b = m1 * m2;
	c = a/b;
	l3 = (a%b)/nwd_ite(a,b);
	m3 = b/nwd_ite(a,b);
	
	cout << "Roznica:" << endl;
	
	if(c==0)
	cout << l1 << "/" << m1 << " - " << l2 << "/" << m2 << " = " << l3 << "/" << m3 << endl << endl;
	if(l3==0)
	cout << l1 << "/" << m1 << " - " << l2 << "/" << m2 << " = " << c << endl << endl;
	else
	cout << l1 << "/" << m1 << " - " << l2 << "/" << m2 << " = " << c << " " << l3 << "/" << m3 << endl << endl;
}

void iloczyn(int l1, int m1, int l2, int m2)
{
	int a, b, c, l3, m3;
	a = l1 * l2;
	b = m1 * m2;
	c = a/b;
	l3 = (a%b)/nwd_ite(a,b);
	m3 = b/nwd_ite(a,b);
	
	cout << "Iloczyn:" << endl;
	
	if(c==0) 
	cout << l1 << "/" << m1 << " * " << l2 << "/" << m2 << " = " << l3 << "/" << m3 << endl << endl;
	else if(l3==0)
	cout << l1 << "/" << m1 << " * " << l2 << "/" << m2 << " = " << c << endl << endl;
	else
	cout << l1 << "/" << m1 << " * " << l2 << "/" << m2 << " = " << c << " " << l3 << "/" << m3 << endl << endl;
}

void iloraz(int l1, int m1, int l2, int m2)
{
	int a, b, c, l3, m3;
	a = l1 * m2;
	b = m1 * l2;
	c = a/b;
	l3 = (a%b)/nwd_ite(a,b);
	m3 = b/nwd_ite(a,b);
	
	cout << "Iloraz:" << endl;
	
	if(c==0) 
	cout << l1 << "/" << m1 << " : " << l2 << "/" << m2 << " = " << l3 << "/" << m3 << endl << endl;
	else if(l3==0)
	cout << l1 << "/" << m1 << " : " << l2 << "/" << m2 << " = " << c << endl << endl;
	else
	cout << l1 << "/" << m1 << " : " << l2 << "/" << m2 << " = " << c << " " << l3 << "/" << m3 << endl << endl;
}

int main()
{
	int l1, m1, l2, m2, a, b;
	wczytaj(l1, m1, l2, m2);
	roznica(l1, m1, l2, m2);
	iloczyn(l1, m1, l2, m2);
	iloraz(l1, m1, l2, m2);
	return 0;
}
//Karol Walczyszyn
