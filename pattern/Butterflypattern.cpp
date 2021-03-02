#include <iostream>
using namespace std;

int main()
{
    int i, j, r, n = 1;
    cin >> r;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int s = 2 * r - 2 * i;
        for (int j = 1; j <= s; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
     for (i = r; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int s = 2 * r - 2 * i;
        for (int j = 1; j <= s; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
     
    return 0;
}