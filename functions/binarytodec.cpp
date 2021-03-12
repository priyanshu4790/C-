#include<bits/stdc++.h>
using namespace std;
int binary(int n)
{
    int add = 0,x=1;
     while(n>0)
     {
         int y = n%10;
         ans += x*y;
         x*=2;
         n/=10;
     }
     return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << binary(n)<<endl;
}