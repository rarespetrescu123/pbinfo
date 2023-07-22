#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("fractzii.in");
ofstream fout("fractzii.out");

int cmmdc(int a,int b)
{
    if(b==0)
        return a;
    return cmmdc(b,a%b);
}

int main()
{
    int n,m,p,nivel=0;

    fin>>n>>m;

    p=cmmdc(n,m);
    n=n/p;
    m=m/p;
    while(n!=1 && m!=1)
    {
     if(n>m)
     {
         nivel+=n/m;
         n=n%m;
     }
     else
     {
         nivel+=m/n;
         m=m%n;
     }
    }
    if(n==1)
        fout<<nivel+m;
    else
        fout<<nivel+n;



    return 0;
}
