#include<iostream>
using namespace std;

int main()
{
    int n;
    int i;

    cin >> n;

    i = 2;
    while( n > 1 )
    {
        while( n%i == 0 )
        {
            cout << i << " ";
            n = n/i;
        }
        i = i+1;
    }
    cout << endl;

    return 0;
}
