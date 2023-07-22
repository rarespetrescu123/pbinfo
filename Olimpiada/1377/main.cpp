#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("maxd.in");
ofstream fout("maxd.out");

int nrdiv(int n)
{
    int c=1;
    int div=2;
    int p=0;
    while(n>1)
    {
        p=0;
        while(n%div==0)
        {
            p++;
            n/=div;
        }
        c*=(p+1);
        div++;
        if(div*div>n)
            div=n;

    }

    return c;


}

int main()
{
    int a,b,nrdivmax=0,nrmin=0,c=0;

    fin>>a>>b;

    for(int i=a;i<=b;i++)
    {
        int x=nrdiv(i);
        if(x>nrdivmax)
        {
            nrdivmax=x;
            nrmin=i;
            c=1;
        }
        else if(x==nrdivmax)
            c++;

    }
    fout<<nrmin<<" "<<nrdivmax<<" "<<c;

    return 0;
}
