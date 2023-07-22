#include <iostream>
#include <cmath>

using namespace std;

bool prim(int n)
{
    if(n==1)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    else if(n>=3)
        for(int i=3;i*i<=n;i+=2)
            if(n%i==0)
                return false;
    return true;
}


int main()
{
    int n,x,maxim=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        int m=sqrt(x);
        if(m*m==x)
            maxim+=3*x;
        else if(!prim(x))
            maxim+=x;

    }
    cout<<maxim;
    return 0;
}
