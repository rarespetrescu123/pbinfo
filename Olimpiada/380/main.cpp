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
bool aproapeprim(int n)
{
    for(int i=2;i<=n/2;i++)
        if(n%i==0 && prim(i)==true && prim(n/i)==true && i!=n/i)
            return true;
    return false;
}
int main()
{
    int n,contor=0,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(aproapeprim(x))
            contor++;

    }
    cout<<contor;
    return 0;
}
