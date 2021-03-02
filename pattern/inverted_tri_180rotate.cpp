#include <iostream>
using namespace std;

int main()
{
    int i, j, r;
    cin >> r;
    for (i = 1; i <= r; i++)
    {
        for (j=r; j>0; j--)
        {
            if (i>=j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}