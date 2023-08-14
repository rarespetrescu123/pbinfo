#include <iostream>

using namespace std;
int nrcifre(int n)
{
    int c=0;
    while(n)
    {
        c++;
        n/=10;
    }
    return c;
}
int main()
{
    int n,b,r;
    cin>>n>>b>>r;
    long long int p=1;
    int cifre=nrcifre(r);
    if(cifre>n)
        cout<<-1;
    else if(cifre==n)
        cout<<r;
    else
    {
        for(int i=1;i<=n-1;i++)
        {
            p=(p*10)%b;
        }
        if(p<=r)
            p=r-p;

        else
            p=b-p+r;

        if(p==0)
        {
            cout<<1;
            for(int i=0;i<n-1;i++)
                cout<<0;
        }
        else
        {
            int v=nrcifre(p);
            cout<<1;
            for(int i=0;i<n-1-v;i++)
                cout<<0;
            cout<<p;
        }
    }




    return 0;
}
