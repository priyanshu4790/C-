#include <iostream>

using namespace std;

int main()
{
    int n,j=2;
    cin>>n;
    int a[n];
    int pd=a[1]-a[0];
    int ans = 2;
    int curr=2;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(j<n)
    {
        if(pd == a[j]-a[j-1])
        {
            curr++;
        }
        else
        {
            pd = a[j]-a[j-1];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout<<ans;
}