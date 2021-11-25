#include <iostream>
using namespace std;

int ile(int a,int b)
{
    int ile=1;
    while (a!=b)
    {
        if(a>b)
        {
            a-=b;
            ile++;
        }
        else
        {
            b-=a;
            ile++;
        }
    }
    return ile;

}

main()
{
    int a,b;
    do
    {
    cout<<"Podaj"<<endl;
    cout<<"Dlugosc boku a: ";
    cin>>a;
    cout<<"Dlugosc boku b: ";
    cin>>b;
    cout<<endl;
    }
    while(a==b);
    cout<<endl<<"Ten prostokat mozna wypelnic maksymalnie "<<ile(a,b)<<" kwadratami";
}