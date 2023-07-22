#include <iostream>
#include <fstream>



using namespace std;

ifstream fin("patrate3.in");
ofstream fout("patrate3.out");

int main()
{
    int c,m,n,t=0,nr=0;

    fin>>c;

    if (c==1)
    {
        fin>>m;
        fout<<m*8;
    }
    if (c==2)
    {
        fin>>n;
        while(8*(t+1)<=n-nr)
        {
         t++;
         nr+=8*t;
        }
        if(n>nr)
            fout<<t+1;
        else
            fout<<t;
    }
    return 0;
}
