#include<iostream>
using namespace std;

int main()
{
    int i,j,r;
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=i;j<=r;j++)
        {
           cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}