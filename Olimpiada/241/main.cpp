#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("interclasare.in");
ofstream fout("interclasare.out");

int main()
{
    int n,m,v[100000],r[100000],k[200000],c=0;
    fin>>n;
    for(int i=0;i<n;i++)
        fin>>v[i];
    fin>>m;
    for(int j=0;j<m;j++)
        fin>>r[j];
    int a=0,b=0;
    while(a<n && b<m)
    {
        if(v[a]>r[b])
        {
            k[c]=r[b];
            b++;
            c++;
        }
        else
        {
            k[c]=v[a];
            a++;
            c++;
        }
    }
    if(a<n)
        while(a<n)
    {
        k[c]=v[a];
        a++;
        c++;
    }
    if(b<m)
        while(b<m)
    {
        k[c]=r[b];
        b++;
        c++;
    }


    for(int i=0;i<n+m;i++)
    {
        fout<<k[i]<<" ";
        if((i+1)%10==0)
            fout<<'\n';
    }


    return 0;
}
