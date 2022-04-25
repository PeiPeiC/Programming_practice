#include <iostream>
using namespace std;

void aaa(int*pi,int*pi2,int*aa)
{   int iva = 3;
    int i;
    pi = &iva;
    while(0 < *pi)
    {
        aa[*pi]=*pi-3;
        *pi=*pi-1;
        *pi2=*pi2-1;
    }
    cout<<"\n*pi="<<*pi<<"\n";
    cout<<"\n iva="<<iva<<"\n";
    cout<<"\n *pi2= "<<*pi2<<"\n";
}


int main()
{
    int i;
    int iva = 4;
    static int *pi = new int (-3);
    int *pi2= new int (4);
    int *pi3= new int [5];
    while(*pi2 >= 0)
    {
        pi3[*pi2]=*pi-3;
        *pi=*pi+2;
        *pi2=*pi2-1;
    }

    for(i=0;i<4;i++)
        cout <<pi3[i]<<" ";
    cout<<"\n *pi= "<< *pi <<"\n";
    cout<<"\n iva="<< iva <<"\n";
    cout<<"\n *pi2="<< *pi2 <<"\n";

    aaa(pi,pi2,pi3);

    cout<<"\n *pi="<< *pi <<"\n";
    cout<<"\n iva="<< iva <<"\n";
    cout<<"\n *pi2="<< *pi2 <<"\n";

    while(*pi>0)
    {
    *pi--;
    *pi2=*pi2-1;

    cout<<"\n *pi="<< *pi <<"\n";
    cout<<"\n iva="<< iva <<"\n";
    cout<<"\n *pi2="<< *pi2 <<"\n";

    }

    for(i=0;i<4;i++)
        cout<<pi3[i]<<" ";
    cout<<"\n *pi="<< *pi <<"\n";
    cout<<"\n iva="<< iva <<"\n";
    cout<<"\n *pi2="<< *pi2 <<"\n";
return 0;
}
