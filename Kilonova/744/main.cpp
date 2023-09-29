#include <iostream>
#include <fstream>
#define MAXN 2000

using namespace std;
ifstream fin("volei.in");
ofstream fout("volei.out");
int v[MAXN],b[MAXN];
int main()
{
    int n,m;
    fin>>n;
    for(int i=0;i<n;i++)
        fin>>v[i];
    fin>>m;
    for(int i=0;i<m;i++)
        fin>>b[i];

    return 0;
}
