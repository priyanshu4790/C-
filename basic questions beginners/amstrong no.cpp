#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int n,lastdigit,sum=0;
    cin>>n;
    int a=n;
    while(n>0)
    {
        lastdigit = n%10;
        sum += pow(lastdigit,3);
        n=n/10;
    }
    if (sum==a)
    {
        cout<<"yes";

    }
    else
    {
        cout<<"no";
    }
    
  

    return 0;
}