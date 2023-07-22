#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("accesibil.in");
ofstream fout("accesibil.out");
bool accesibil(int n)
{
    if(n<10)
        return false;
    int u=n%10;
    n/=10;
    while(n)
    {
        if(n%10!=u-1)
            return false;
        u=n%10;
        n/=10;

    }
    return true;
}
bool posibilaccesibil(int n)
{
    if(accesibil(n) || n<100)
        return false;
    int x;
    long long int p=1;
    while(p<=n)
    {
        x=n/(10*p)*p+n%p;
        if(accesibil(x))
            return true;
        p*=10;
    }
    return false;

}

int main()
{

    int p,n,k,i,v[100000],a=0,b=0,c=0;

    fin>>p;
    fin>>k>>n;
    for(i=0;i<n;i++)
        fin>>v[i];

    if(p==1)
    {
     for(i=0;i<n;i++)
     {
         if(accesibil(v[i]))
         {
             if(v[i]>=a)
             {
                 c=b;
                 b=a;
                 a=v[i];
             }
             else if(v[i]>=b)
             {
                 c=b;
                 b=v[i];
             }
             else if(v[i]>=c)
                c=v[i];
         }
     }
     fout<<c<<" "<<b<<" "<<a;
    }

    if(p==2)
    {
        int contor=0;
        for(i=0;i<n;i++)
            if(posibilaccesibil(v[i]))
                contor++;
        fout<<contor;
    }
    if(p==3)
    {
        for(i=1;i<=k;i++)
            fout<<i;
        if(k!=9)
        {
            fout<<" ";
            for(i=9-k+1;i<=9;i++)
                fout<<i;

        }
    }
    if(p==4)
    {
        fout<<(10-k)/2<<" "<<(11-k)/2;
    }


    return 0;
}
