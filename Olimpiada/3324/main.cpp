#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("eratostene0.in");
ofstream fout("eratostene0.out");
long long v[1000001];

int main()
{
    int n,i,j,x,y;
    v[1]=1;

    fin>>n;
    for(i=2;i<=1000000;i++)
        v[i]=i+1;
    for(i=2;i*i<=1000000;i++)
    {
        for(j=i+1;j*i<=1000000;j++)
            v[i*j]+=(i+j);
        v[i*i]+=i;
    }
    for(i=1;i<=1000000;i++)
        v[i]+=v[i-1];//sume partiale
    for(i=0;i<n;i++)
    {
        fin>>x>>y;
        fout<<v[y]-v[x-1]<<'\n';


    }





    return 0;
}
