#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
ifstream fin("copii.in");
ofstream fout("copii.out");
int nrdiv(long long int z)
{
    int contor=0,c2=0;
    if(z==1 || z==2)
        return z;
    while(z%2==0)
    {
        z/=2;
        c2++;
    }
    if(z==1)
        return c2+1;
    contor=c2+1;
    for(long long int i=3;i*i<=z;i+=2)
    {
        int exp=0;
        while(z%i==0)
        {
            exp++;
            z/=i;
        }
        contor*=(exp+1);
    }
    if(z>1)
        contor*=2;
    return contor;

}
int main()
{
    long long int x,y,k,c;
    fin>>c;
    if(c==1)
    {
        fin>>x;
        fin>>k;
        long long int f=1;
        long long int pk=1;
        for(int i=0;i<k;i++)
            pk*=10;
        int contor5=0;
        for(long long int i=1;i<=x;i++)
        {
            long long int originali=i;
            while(originali%5==0)
            {
                originali/=5;
                contor5++;
            }
        }
        int contor2=contor5;
        for(long long int i=1;i<=x;i++)
        {
            long long originali=i;
            while(originali%2==0 && contor2>0)
            {
                originali/=2;
                contor2--;
            }
            while(originali%5==0 && contor5>0)
            {
                originali/=5;
                contor5--;
            }
            f*=originali;
            f=f%pk;
        }

        fout<<setfill('0') << setw(k)<<f;

    }
    else
    {
        fin>>y;
        long long int maxv=1;
        int contordiv=0;
        long long int z=1;
        while(y>=z*z)
        {
            if(y%(z*z)==0)
            {
                maxv=z*z;
                contordiv=nrdiv(z*z);
            }
            z++;
        }
        fout<<maxv<<" "<<contordiv;

    }
    return 0;
}
