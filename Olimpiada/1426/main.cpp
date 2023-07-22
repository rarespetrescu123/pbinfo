#include <iostream>
#include <fstream>

using namespace std;
bool contine(int x,int c)
{
    if(x==c)
        return true;
    while(x)
    {
        if(x%10==c)
            return true;
        x/=10;
    }
    return false;

}
bool prim(int n)
{
    if(n<2)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(int d=3;d*d<=n;d+=2)
        if(n%d==0)
            return false;
    return true;

}

int rasturnat(int n)
{
    int s=0;
    while(n)
    {
        s*=10;
        s+=n%10;
        n/=10;
    }
    return s;
}
ifstream fin("pozne.in");
ofstream fout("pozne.out");

int main()
{
    int p;
    fin>>p;
    if(p==1)
    {
     int n,s,c,x;
     fin>>n>>s>>c;
     for(int i=0;i<n;i++)
            {
                fin>>x;
                if(contine(x,c))
                    fout<<x<<" ";
            }
    }
    else
    {
        int n,c,s,x,nrprime=0,profit=0;
        fin>>n>>s>>c;
        for(int i=0;i<n;i++)
        {
            fin>>x;
            if(prim(rasturnat(x)))
            {
                nrprime++;
                if(contine(x,c))
                    profit-=s;

                else
                    profit+=s;

            }

        }
        fout<<nrprime<<" ";

        if(profit==0)
            fout<<0;
        else if(profit>0)
            fout<<1;
        else
            fout<<-1;
    }
    return 0;
}
