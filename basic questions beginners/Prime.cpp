#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,i,count=0;
    cin >> n;
    for (i = 2; i <=sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout<<"Non prime";
            count = 1;
            break;
        }
    }

    if (count == 0)
    {
        cout << "prime";
    }
   

    return 0;
}
