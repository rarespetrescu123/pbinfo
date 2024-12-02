#include <iostream>
#include <fstream>
#define MAXN 10000001
#define MAXK 51

std::ifstream fin("pergament.in");
std::ofstream fout("pergament.out");
bool v[MAXN][MAXK];
int n,k;
void afiseaza()
{
    for(int i=1;i<=n;i++,fout<<'\n')
        for(int j=1;j<=k;j++)
            fout<<v[i][j]<<' ';
}
int main(void)
{
    int q,a,b,c,d,x,y,j,r,l;
    fin>>n>>k>>q;
    fin>>a>>b>>c>>d;
    fin>>x>>y;
    for(int i=0;i<q;i++)
    {
        fin>>j>>r>>l;
        for(int p=r;p<r+l;p++)
            v[p][j]=1;
    }
    int mov=0;
    for(int i=1;i<=n;i++)
    {
        for(int p=x;p<x+y;p++)
            mov+=v[i][p];
        x=1+(x*a+b)%k;
        y=1+(y*c+d)%(k-x+1);
    }
    fout<<mov;
    
        
    return 0;
}