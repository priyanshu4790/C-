#include<iostream>
using namespace std;

int main()
{
    int i,j,k,r;
    cin>>r;
    for(i=1;i<=3;i++)
    {
        
        for(j=1;j<=r;j++)
        {
            if((i+j)%4==0 || (i==2 && j%4==0) )
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
       
        cout<<endl;
    }
    return 0;

}