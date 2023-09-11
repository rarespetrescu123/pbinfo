#include <iostream>
#include <fstream>
#include <algorithm>

#define MAXN 100

using namespace std;
ifstream fin("siruri.in");
ofstream fout("siruri.out");
int v[MAXN],vsortat[MAXN];
int main()
{
    int n;

    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>v[i];
        vsortat[i]=v[i];
    }
    sort(vsortat,vsortat+n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(v[i]==vsortat[j])
                fout<<j+1<<" ";
        }



    return 0;
}
