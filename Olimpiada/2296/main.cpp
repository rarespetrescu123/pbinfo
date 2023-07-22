#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("gcd.in");
ofstream fout("gcd.out");
int a[1000001],b[1000001];
int main()
{
    int n,dvm=1,x=0,i,r,j;

    fin>>n;
    for(i=0;i<n;i++)
        {
            fin>>r;
            a[r]=1;
            x=max(x,r);
        }
    for(i=0;i<n;i++)
        {
            fin>>r;
            b[r]=1;
            x=max(x,r);
        }
    for(i=2;i<=x;i++)
    {
        bool founda=false,foundb=false;
        for(j=i;j<=x;j+=i)
        {
            if(a[j]==1)
                founda=true;
            if(b[j]==1)
                foundb=true;
            if(founda&&foundb)
            {
               dvm=i;
               break;
            }

        }
    }
    fout<<dvm;

    return 0;
}
