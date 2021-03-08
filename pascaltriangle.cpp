#include <iostream>
#include <cmath>


using namespace std;
int fact(int n)
{ 
    int a=1;
    for(int i=1;i<=n;i++)
    {
        a *= i;
        
    }

return a ;

}

int main()
{
    int n,r ;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}