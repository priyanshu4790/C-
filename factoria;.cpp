#include <iostream>
#include <cmath>


using namespace std;
int fact(int n)
{ 
    int a=1;
    for(int i=1;i<=n;i++)
    {
        a *= i;
        
    }

return a ;

}

int main()
{
    int a;
    cin >> a;
    cout<<fact(a);
    return 0;
}
 
   