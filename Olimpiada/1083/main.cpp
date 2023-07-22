#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("sir5.in");
ofstream fout("sir5.out");

int main()
{
    //cerinta a
    long x,y,p=1,z;
    int k,s=0,a,b,i,c,sa;
    fin>>k>>x>>a>>b;
    s=1;
    sa=1;
    for(i=2;i<=k;i++)
    {
        s=(i+s+sa)%10;
        sa=(i+sa)%10;
    }
    fout<<s<<'\n';

    //cerinta b
    y=x; k=1;
    while(y>9)
    {
        k++;
        y/=10;
        p=p*10;
    }
    if(y==k)
    {
        z=0;
        for(i=1;i<=k+1;i++)
            z=z*10+i;
    }
    else
        z=(x%p)*10+y;
    fout<<z<<'\n';

    //cerinta c
    if(a<b)
        fout<<b-a;
    else
        fout<<0;

    return 0;
}
