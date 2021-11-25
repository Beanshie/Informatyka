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

int ite_NWD(int a, int b)
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

int main(int argc, char** argv) {
	int x,y;
	
	do{
		cout<<"Podaj 2 liczby wieksze od zera: "<<endl;
		cin>>x>>y;
	}while((x<=0)&&(y<=0));
	
	cout<<endl<<"ITERACJA"<<endl;
	cout<<"NWD to: "<<ite_NWD(x,y)<<endl;
	
	cout<<endl<<"REKURENCJA"<<endl;
	cout<<"NWD to: "<<rek_NWD(x,y)<<endl;
	
	return 0;
}
