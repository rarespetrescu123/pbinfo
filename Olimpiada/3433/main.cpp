#include <iostream>
#include <fstream>


using namespace std;
int v[100000],prime[50000],d[100000];
bool eratostene[45001];
int nrprime=0;
int fr[100000];
void ciur()
{
    int i,j;
    eratostene[0]=true;
    eratostene[1]=true;
    for(i=2;i<=45000;i++)
        if(!eratostene[i])
            for(j=2*i;j<=45000;j+=i)
                eratostene[j]=true;
    for(i=2;i<=45000;i++)
        if(!eratostene[i])
            prime[nrprime++]=i;


}
int nrdiv(int n)
{
    int d=1;
    int p=0;
    while(n>1)
    {
        int exp=0;
        while(n%prime[p]==0)
        {
            n/=prime[p];
            exp++;
        }
        d*=(exp+1);
        p++;
        if(n>1 && prime[p]*prime[p]>n)
        {
          d*=2;
          break;
        }

    }
    return d;
}
ifstream fin("forta.in");
ofstream fout("forta.out");
int main()
{
    int c,n,nrmaxdiv=0,nrmic=200000000;
    fin>>c;
    fin>>n;
    for(int i=0;i<n;i++)
        fin>>v[i];
    ciur();
    if(c==1)
    {
        for(int i=0;i<n;i++)
        {
            d[i]=nrdiv(v[i]);
            if(d[i]>nrmaxdiv)
            {
                nrmaxdiv=d[i];
                nrmic=v[i];
            }
            else if(d[i]==nrmaxdiv)
                nrmic=min(nrmic,v[i]);

        }
        fout<<nrmic;
    }
    if(c==2)
    {
        int maxsecventa=0;
        for(int i=0;i<n;i++)
        {
            d[i]=nrdiv(v[i]);
            fr[d[i]]++;
        }
        for(int i=0;i<100000;i++)
            maxsecventa=max(maxsecventa,fr[i]);
        fout<<maxsecventa;
    }

    return 0;
}
