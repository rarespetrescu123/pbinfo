#include <iostream>

using namespace std;

int main()
{
    int n,v[1000],nrmax,nrmin,i,j,pmax=0,pmin=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];
    nrmax=v[0];
    nrmin=v[0];
    for(i=0;i<n;i++)
        if(nrmax<v[i])
            nrmax=v[i],pmax=i;

    for(j=0;j<n;j++)
        if(nrmin>v[j])
            nrmin=v[j],pmin=j;

    if(pmin<pmax)
        for(i=pmin;i<=pmax;i++)
            cout<<v[i]<<" ";
    else
        for(i=pmax;i<=pmin;i++)
            cout<<v[i]<<" ";



    return 0;
}
