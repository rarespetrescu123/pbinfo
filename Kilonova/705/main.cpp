#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("panglica.in");
ofstream fout("panglica.out");
int v[10000];
int main()
{
    int n,c,x,primpoz=-1,ultpoz=-1,difmax=0,culoare=0,pozdreapta=0,pozstanga=0;
    fin>>n>>c;
    for(int i=0;i<n;i++)
    {
        fin>>v[i];
    }
    for(int i=1;i<=c;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[j]==i)
            {
                 primpoz=j;
                 break;
            }
        }
        for(int k=n;k>0;k--)
        {
            if(v[k]==i)
            {
                ultpoz=k;
                break;
            }
        }
        if(ultpoz-primpoz+1>difmax)
        {
            difmax=ultpoz-primpoz+1;
            culoare=i;
            pozdreapta=ultpoz;
            pozstanga=primpoz;
        }


    }
    int val1=difmax;
    fout<<val1<<'\n';
    fout<<culoare<<'\n';
    fout<<pozstanga<<'\n';
    fout<<n-pozdreapta-1<<'\n';
    return 0;
}
