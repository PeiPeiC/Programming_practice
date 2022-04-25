#include <iostream>

using namespace std;

int main()
{
    int vec[3][3];
    int x, y, aux;
    //Input
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            cout << "POSITION [" << x + 1 << "][" << y + 1 << "]: ";
            cin >> vec[x][y];
        }
    }

    cout << "\nPress ENTER...";
    cin.ignore();
    cin.get();
    system("CLS");
    //Array before the change
    cout << "ARRAY A" << endl;
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            cout << vec[x][y] << "\t";
        }
        cout << "\n";
    }
    //Change
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            if (x != y)
            {
                aux = vec[x][y];
                vec[x][y] = vec[y][x];
                vec[y][x] = aux;
            }
        }
    }

    //Array after the change
    cout << "\nARRAY A" << endl;
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            cout << vec[x][y] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
    system("PAUSE");
    return 0;
}