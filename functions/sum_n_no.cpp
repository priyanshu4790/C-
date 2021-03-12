#include<bits/stdc++.h>
using namespace std;

int sum(int x)
{
    int add=0;
    for(int i;i<=x;i++)
    {
        add +=i;
    }
    return add;
}

int main()
{
    int a;
    cin>>a;
    cout<<sum(a);
    return 0;

}