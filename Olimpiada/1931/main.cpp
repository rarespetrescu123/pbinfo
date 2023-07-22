#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("fantastice.in");
ofstream fout("fantastice.out");


bool prim(int x)
{
    if(x<=1)
        return false;
    if(x==2)
        return true;
    if(x%2==0)
        return false;
    for(int i=3;i*i<=x;i++)
        if(x%i==0)
            return false;
    return true;
}

int nrdiv(int x)
{
    int c=0;
    for(int i=1;i*i<=x;i++)
    {
        if(x%i==0)
            c+=2;
        if(i*i==x)
            c--;
    }
    return c;
}

int main()
{

    int n,c=0,i,x;

    fin>>n;
    for(i=0;i<n;i++)
    {
        fin>>x;
        if(prim(nrdiv(x)))
           c++;
    }
    fout<<c;


    return 0;
}
