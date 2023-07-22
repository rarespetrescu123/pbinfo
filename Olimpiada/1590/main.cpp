#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
ifstream fin("arma1.in");
ofstream fout("arma1.out");
int ciur[50000];
int prime[50000];
int v[10000];
int nr=0;
int baza(int n,int e)
{
    if(e==1)
        return n;
    float r=1.0/e;
    int base=pow(n,r);
    if(base==1 && n!=1)
        base++;
    return base;


}
int exponent(int n)
{
    int e1=0;
    int e2;

    for(int i=0;prime[i]*prime[i]<=n && i<nr;i++)
    {
        e2=0;
        while(n%prime[i]==0)
        {
            e2++;
            n/=prime[i];
        }
        if(e1==0)
        {
            e1=e2;
            continue;
        }
        if(e2==0)
        {
            continue;
        }
        if(e1==1 || e2==1)
            return 1;
        int a=e2%e1;
        while(a)
        {
            e2=e1;
            e1=a;
            a=e2%e1;
        }
    }
    if(n!=1 || e1==0)
        e1=1;
    return e1;

}
int main()
{
    int c,n;
    prime[0]=2;
    nr++;
    for(int j=2;j<48000;j+=2)
        ciur[j]=1;
    for(int i=3;i<48000;i+=2)
        if(ciur[i]==0)
        {
            prime[nr]=i;
            nr++;
            for(int k=i;k<48000;k+=i)
                ciur[k]=1;

        }

    fin>>c;
    fin>>n;

    for(int i=0;i<n;i++)
        fin>>v[i];
    if(c==1)
    {
        long long int s=0;
        for(int i=0;i<n;i++)
        {
            int p=exponent(v[i]);
            s+=baza(v[i],p);

        }
        fout<<s;
    }
    else
    {
        for(int i=0;i<n;i++)
            fout<<(int)exponent(v[i])<<'\n';
    }
    return 0;
}
