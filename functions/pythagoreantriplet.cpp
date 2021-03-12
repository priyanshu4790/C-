#include<bits/stdc++.h>
using namespace std;

bool triplet(int x,int y,int z)
{
    int a = max(x,max(y,z));
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }
    
   if(a*a == ((b*b)+(c*c)))
   {
       return true;
   } 
   else{
       return false;
   }

  
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(triplet(a,b,c))
    {
        cout<<"Yes";
    } 
    else
    {
        cout<<"no";

    }
    return 0;

}