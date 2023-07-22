#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("arhitectura2.in");
ofstream fout("arhitectura2.out");
int v[2000000];

int main()
{
    int n;
    fin>>n;
    for(int i=0;i<n;i++)
        fin>>v[i];
    sort(v,v+n,greater<int>());
    for(int i=0;i<n;i++)
        fout<<v[i]<<" ";
    fout<<'\n';
    for(int i=0;i<n;i++)
    {
        if(i==0)
            fout<<(2*v[0]==v[1])<<" ";
        else if(i==n-1)
            fout<<(2*v[n-1]==v[n-2])<<" ";
        else
            fout<<(2*v[i]==v[i-1]+v[i+1])<<" ";
    }
    return 0;
}
