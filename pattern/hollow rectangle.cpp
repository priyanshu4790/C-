#include<iostream>
using namespace std;

int main()
{
    int i,j,r,c;
    cin>>r>>c;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==1 || i==r )
            {
                cout<<"* ";

            }
            else if(j==1 || j == coloumn)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }

        }
        cout<<endl;
    }
return 0;
}

