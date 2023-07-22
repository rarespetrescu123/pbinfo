#include <iostream>
#include <cmath>

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
    for(int i=2;i*i<=n;i++)
        if(n%i==0 && prim(i) && prim(n/i) && i!=n/i)
            return true;
    return false;
}
int main()
{
    int n;
    cin>>n;
    if(prim(n)==true)
        cout<<"prim";
    else if(prim(sqrt(n))==true && sqrt(n)==int(sqrt(n)))
        cout<<"patrat"<<" "<<"prim";
    else if(aproapeprim(n))
        cout<<"aproape"<<" "<<"prim";
    else
        cout<<"compus";
    return 0;
}
