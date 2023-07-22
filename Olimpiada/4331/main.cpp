#include <iostream>

using namespace std;

int cmmdc(int a, int b)
{
    if(b==0)
        return a;
    return cmmdc(b,a%b);
}
int main()
{
    int n,x,nrmax=0,nrmin=1000000000;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<nrmin)
            nrmin=x;
        if(x>nrmax)
            nrmax=x;
    }
    cout<<cmmdc(nrmax,nrmin);

    return 0;
}
