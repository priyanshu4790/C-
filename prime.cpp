#include <iostream>
#include <cmath>


using namespace std;
bool Prime(int n)
{ int i;
     for (i = 2; i <=sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
            
           
    }
    

        return true;

}

int main()
{
    int a,b;
    cin >> a>>b;
    for(int i = a;i<=b;i++)
    {
        if(Prime(i)==1){
            cout<<i<<endl;
        }
    }
    return 0;
}
 
   