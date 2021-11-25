#include <iostream>
using namespace std;

double rek(int n)
{
	if (n == 0)
		return 1;
	if (n % 3 == 1)
		return rek(n - 1) + 5;
	if (n % 3 == 2)
		return rek(n - 1) * 10;
	if (n % 3 == 0)
		return rek(n - 1) - 2;
}

double ite(int n)
{
	double a=1;

	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 1)
			a += 5;
		if (i % 3 == 2)
			a *= 10;
		if (i % 3 == 0)
			a -= 2;
	}
	return a;
}

int main()
{
	int m;

	do {
		cout << "Podaj n>0: ";
		cin >> m;
	} while (m <= 0);

	cout << endl << "REKURENCYJNIE" << endl;
	for (int i = 0; i < m; i++)
		cout << rek(i) << endl;

	cout << endl << "ITERACYJNIE" << endl;
	for (int i = 0; i < m; i++)
		cout << ite(i) << endl;
	
	cout << endl << "SUMA" << endl;
	double s=0;
	for (int i = 0; i < m; i++)
		s += ite(i);
	cout << s << endl;

	cout << endl << "SREDNIA WARTOSC" << endl;
	double sw = 0;
	sw = s / m;
	cout << sw << endl;

	return 0;
}