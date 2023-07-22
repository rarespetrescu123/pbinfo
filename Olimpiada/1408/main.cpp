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
    int n,c=0,maxprim=0,minprim=1000000000,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        int originalx=x;
        if(prim(x))
        {
           c++;
           maxprim=max(maxprim,x);
           minprim=min(minprim,originalx);
        }


    }
    cout<<c<<" "<<minprim<<" "<<maxprim;

    return 0;
}
