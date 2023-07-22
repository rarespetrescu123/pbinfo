#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
ifstream fin("pseudocmp.in");
ofstream fout("pseudocmp.out");

int smcifr(int n)
{
    int s=0;
    while(n)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
int v[100000],sm[60];
int main()
{
    long long int nrperechi=0;
    int c,n;
    fin>>c>>n;
    for(int i=0;i<n;i++)
        fin>>v[i];
    sort(v,v+n);
    if(c==1)
    {
     for(int i=1;i<n;i++)
        if(smcifr(v[i])<smcifr(v[i-1]))
        {
            fout<<v[i-1]<<" "<<v[i];
            return 0;
        }
        fout<<-1;


    }
    else
    {
     for(int i=0;i<n;i++)
     {
         int p=smcifr(v[i]);
         for(int j=p+1;j<=54;j++)
            nrperechi+=sm[j];
         sm[p]++;

     }
     fout<<nrperechi;

    }

    return 0;
}
