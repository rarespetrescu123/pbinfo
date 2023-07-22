#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
ifstream fin("formula1.in");
ofstream fout("formula1.out");

int main()
{
    int c,n,k;
    fin>>c;
    if(c==1)
    {
     fin>>k>>n;
     fout<<4ll*k*k-4*k+1;
    }
    else if(c==2)
    {
        fin>>k>>n;
        long long int a=0;
        for(int i=1;i<=n;i++)
             a+=2ll*i*(i-1);
        long long int x=sqrt(a*2+1);
        if(x%2==0)
            x-=1;
        fout<<x*x;


    }
    return 0;
}
