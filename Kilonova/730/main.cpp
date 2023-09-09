#include <iostream>
#include <fstream>

#define MAXN 101

using namespace std;

ifstream fin("joc.in");
ofstream fout("joc.out");

int v[MAXN];

int main()
{
    int n,az,x,c=1,poz1=1,poz2=1,puncte1=0,puncte2=0;
    fin>>n;
    for(int i=1;i<=n;i++)
        fin>>v[i];
    fin>>az;
    for(int i=0;i<az;i++)
    {
        fin>>x;
        if(c%2==1)
        {
            poz1+=x;
            if(poz1>n)
                poz1-=n;
            if(v[poz1]==0 || (poz1==poz2 && poz1!=1))
            {
                poz1=1;
                puncte1=0;
            }
            else
            {
                puncte1+=v[poz1];
            }
            if(poz1==1 && puncte1)
            {
                fout<<1<<endl;
                fout<<poz1<<" "<<puncte1<<endl;
                fout<<poz2<<" "<<puncte2;
                return 0;
            }
        }
        else
        {
            poz2+=x;
            if(poz2>n)
                poz2-=n;
            if(v[poz2]==0 || (poz1==poz2 && poz1!=1))
            {
                poz2=1;
                puncte2=0;
            }
            else
            {
                puncte2+=v[poz2];
            }
            if(poz2==1 && puncte2)
            {
                fout<<2<<endl;
                fout<<poz1<<" "<<puncte1<<endl;
                fout<<poz2<<" "<<puncte2;
                return 0;
            }
        }
        c++;
    }
    if(puncte1>puncte2)
        fout<<1<<endl;
    else if(puncte2>puncte1)
        fout<<2<<endl;
    else
    {
        if(poz1>poz2)
            fout<<1<<endl;
        else
            fout<<2<<endl;
    }
    fout<<poz1<<" "<<puncte1<<endl;
    fout<<poz2<<" "<<puncte2;


    return 0;
}
