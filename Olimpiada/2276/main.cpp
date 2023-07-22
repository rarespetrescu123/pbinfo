#include <iostream>
#include <algorithm>

using namespace std;
int v[200000];
int n;
int cautbinstanga(int x)
{
    int stanga=0,dreapta=n-1;
    int mijloc;
    int pozitie=-1;
    while(stanga<=dreapta)
    {
        mijloc=(dreapta+stanga)/2;
        if(x>v[mijloc])
            stanga=mijloc+1;
        else
            {
             dreapta=mijloc-1;
             pozitie=mijloc;
            }
    }


    return pozitie;
}
int cautbindreapta(int x)
{
    int stanga=0,dreapta=n-1;
    int mijloc;
    int pozitie=-1;
    while(stanga<=dreapta)
    {
        mijloc=(stanga+dreapta)/2;
        if(x>=v[mijloc])
            {
                stanga=mijloc+1;
                pozitie=mijloc;
            }
        else
            dreapta=mijloc-1;

    }
    return pozitie;
}
int main()
{
    int T,i;
    int x,y;
    cin>>n>>T;
    for(i=0;i<n;i++)
        cin>>v[i];
    sort(v,v+n);
    for(int i=0;i<T;i++)
    {
        cin>>x>>y;
        int a=cautbinstanga(x);
        int b=cautbindreapta(y);
        if(a==-1)
            cout<<0;
        else
            cout<<b-a+1<<'\n';
    }



    return 0;
}
