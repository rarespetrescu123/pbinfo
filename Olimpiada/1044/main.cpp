#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("piramide.in");
ofstream fout("piramide.out");

int v[10000];
int main()
{
    int n,x,k,p,a;

    fin>>n>>x>>k;

    //cerinta 1
    p=0;
    int px=0;

    //cerinta 2
    p=0;
    int nrincep=0;
    int complet=0;
    int m;
    while(n>nrincep)
    {
        p++;
        nrincep+=(p+1)*(p+2)/2;
        if(complet<=x && nrincep>=x)
            px=p;
        if(nrincep<n)
            complet=nrincep;

    }
    if(nrincep>n)
        m=p-1;
    else
        m=p;
    if(px>m)
        fout<<0<<'\n';
    else
        fout<<px<<'\n';

    fout<<m<<'\n';

    //cerinta 3

    fout<<n-complet<<'\n';

    //cerinta 4
    p=0;
    nrincep=0;
    for(int i=0;i<k;i++)
    {
        fin>>a;
        while(a>nrincep)
        {
            p++;
            nrincep+=(p+1)*(p+2)/2;
        }
        v[p]++;

    }
    int maxa=v[0];
    int pmax=0;
    for(int i=1;i<=m;i++)
    {
        if(v[i]>maxa)
        {
            maxa=v[i];
            pmax=i;
        }
    }
    fout<<pmax;







    return 0;
}
