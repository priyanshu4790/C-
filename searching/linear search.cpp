
#include<bits/stdc++.h>
using namespace std;

int search(int m,int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(m==a[i])
        {
            return i;
        }

    }
   return -1;
}
int main()
{
    int n,i,m;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element to be searched"<<endl;
    cin>>m;
    cout<<"Element is found "<<search(m,a,n);
    return 0;

}