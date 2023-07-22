#include <iostream>

using namespace std;
bool prim(int n)
{
    if(n<=1)
        return false;
    else if(n==2)
        return true;
    else if(n%2==0)
        return false;
    for(int i=3;i*i<=n;i+=2)
        if(n%i==0)
            return false;
    return true;
}


int main()
{
    int n;
    cin>>n;
    int p=10;
    while(n>p)
    {
     if(!prim(n%p))
        {
         cout<<"NU";
         return 0;
        }
        p*=10;

    }
    cout<<"DA";

    return 0;
}
