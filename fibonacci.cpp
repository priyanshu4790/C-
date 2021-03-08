#include <iostream>
#include <cmath>


using namespace std;
int fibo(int n)
{ 
    int t1=0;
    int t2=1;
    int next;
    for(int i=1;i<=n;i++)
    {
        cout<<t1<<" ";
        next = t1+t2;
        t1=t2;
        t2= next;

    }

return ;

}

int main()
{
    int a;
    cin >> a;
    fibo(a);
    return 0;
}
 
   