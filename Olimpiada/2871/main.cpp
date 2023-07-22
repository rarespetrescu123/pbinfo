#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("fulger.in");
ofstream fout("fulger.out");

int main()
{
    int n,x,c,originalx,asfalt=0;

    fin>>n;
    while(n--)
    {
        fin>>x;
        originalx=x;
        c=0;
        while(x)
        {
            c=c*10+9;
            x/=10;
        }
        c=c-originalx;
        fout<<c<<" ";
        if(c%100==10)
            asfalt++;

    }
    fout<<'\n';
    fout<<asfalt;
    return 0;
}
