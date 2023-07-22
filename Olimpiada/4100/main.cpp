#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>

using namespace std;
ifstream fin("bipatrat.in");
ofstream fout("bipatrat.out");

bool patratperfect(long long int n)
{
    return powl(floor(sqrt(n)),2)==n;


}
long long int v[200],n;
int main()
{
    long long int x;
    while(fin>>x)
    {
        n=0;
        if(patratperfect(x))
        {
          long long int p=1;
          while(p<=x)
            p*=10;
        for(int i=1;i<10;i++)
        {
            long long int s=i*p+x;
            if(patratperfect(s))
            {
                v[n]=s;
                n++;
            }

        }
        while(p>=10)
        {
            long long int q=p/10;
            for(int i=0;i<10;i++)
            {
                long long int s=(x/q)*p+i*q+x%q;
                if(patratperfect(s))
                {
                    v[n]=s;
                    n++;
                }
            }
            p=q;
        }
        if(n!=0)
            sort(v,v+n);



        }

        if(n>0)
        {
            fout<<v[0]<<" ";
            for(int i=1;i<n;i++)
                if(v[i-1]<v[i])
                    fout<<v[i]<<" ";
            fout<<'\n';

        }
        else
            fout<<0<<'\n';
    }
    return 0;
}
