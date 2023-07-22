#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
ifstream fin("produse.in");
ofstream fout("produse.out");
int pcf(int n)
{
    while(n>=10)
        n/=10;
    return n;
}

int v[1000];


int main()
{
    int c,n;
    fin>>c>>n;
    if(c==1)
    {
        int pare=0,impare=0;
        for(int i=0;i<n;i++)
        {
            fin>>v[i];
            while(v[i]>=100)
                v[i]/=10;
            if((v[i]%10)%2==0)
                pare++;
            else
                impare++;

        }
        fout<<pare<<" "<<impare;

    }
    if(c==2)
    {
        for(int i=0;i<n;i++)
            fin>>v[i];
        sort(v,v+n);
        for(int i=1;i<=9;i++)
        {
            for(int j=0;j<n;j++)
                if(pcf(v[j])==i)
                {
                    fout<<i<<" ";
                    for(int k=j;k<n;k++)
                        if(pcf(v[k])==i)
                            fout<<v[k]<<" ";
                    fout<<'\n';
                    break;
                }
        }
    }

    return 0;
}
