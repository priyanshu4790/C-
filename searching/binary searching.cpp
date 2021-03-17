
#include<bits/stdc++.h>
using namespace std;

int binary(int m,int a[],int n)
{
   int s=0;
   int e=n;
   while(s<=e)
   {
       int mid = (s+e)/2;
       if(m==a[mid])
       {
           return mid;
           
       }
       else if(a[mid]<m)
       {
           e=mid-1;
       }
       else
       {
           s= mid+1;
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
    cout<<"Element is found "<<binary(m,a,n);
    return 0;

}
