#include<iostream>
using namespace std;

int main()
{
    int i,j,k,r;
    cin>>r;
    for(i=1;i<=r;i++)
    {
        
        for(j=1;j<=r-i;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=r;i>=1;i--)
    {
        
        for(j=1;j<=r-i;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;

}