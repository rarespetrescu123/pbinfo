#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("cifmaxmin.in");
ofstream fout("cifmaxmin.out");

int main()
{
    int n,nrpare=0,nrimpare=0,x,cifmax,cifmin,originalx,p,maxp=0,mini=100;

    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>x;
        if(x%2==0)
            nrpare++;
        else
            nrimpare++;
        originalx=x;
        cifmax=cifmin=originalx%10;
        originalx/=10;
        while(originalx)
        {
         cifmin=min(cifmin,originalx%10);
         cifmax=max(cifmax,originalx%10);
         originalx/=10;
        }
        if(x%2==0)
        {
         p=cifmax*10+cifmin;
         maxp=max(p,maxp);
        }
        else
        {
            p=cifmin*10+cifmax;
            mini=min(mini,p);
        }
    }

    fout<<maxp<<" "<<nrpare<<" "<<mini<<" "<<nrimpare;

    return 0;
}
