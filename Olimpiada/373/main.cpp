#include <iostream>

using namespace std;
bool prim(int x)
{
    if(x==1)
        return false;
    else if(x==2)
        return true;
    else if(x%2==0)
        return false;
    else
        for(int i=3;i*i<=x;i+=2)
            if(x%i==0)
                return false;
    return true;
}
int main()
{
    int n,contor=0;
    cin>>n;
    for(int i=2;i<10000;i++)
    {
        if(prim(i))
        {
            cout<<i<<" ";
            contor++;
        }
        if(contor==n)
            break;
    }

    return 0;
}
