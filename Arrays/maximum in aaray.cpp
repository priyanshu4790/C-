
#include <iostream>

using namespace std;

int main()
{
    int Max;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Max=a[0];
    for(int i=0;i<n;i++)
    {
        Max=max(Max,a[i]);
    }
    cout<<Max;
    

    return 0;
}