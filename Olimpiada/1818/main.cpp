#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("brain.in");
ofstream fout("brain.out");
int v[1000001];
int main()
{
    long long int n,nrbas=0,nrmaxim=0,nrmin=1;
    fin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        fin>>x;
        if(x==i)
        {
         v[nrbas]=x;
         nrbas++;
        }
    }
    for(int i=0;i<nrbas;i++)
    {
        fout<<v[i]<<" ";
        nrmaxim+=v[i];
    }
    fout<<'\n';
    fout<<nrmaxim<<'\n';
    int i=0;
    while(v[i]<=nrmin && i<=nrbas)
    {
        nrmin+=v[i];
        i++;
    }
    fout<<nrmin;


    return 0;
}
