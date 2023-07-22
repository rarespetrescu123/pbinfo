#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("3cifre.in");
ofstream fout("3cifre.out");
long long int v[500000];
int main()
{
    int n,c;
    fin>>n>>c;
    for(int i=0;i<n;i++)
        fin>>v[i];
    if(c==1)
    {
        int valmin=1000,contmin=0,valmax=99,contmax=0;
        long long int nmin,nmax,endmin,endmax;
        for(int i=0;i<n;i++)
        {
            long long int x=v[i];
            while(v[i]>99)
            {
                int p=v[i]%1000;
                if(p>99)
                {
                    if(p<valmin)
                    {
                        valmin=p;
                        contmin=1;
                        nmin=x;
                        endmin=x;
                    }
                    else if(p==valmin)
                    {
                        contmin++;
                        endmin=x;
                    }



                    if(p>valmax)
                    {
                        valmax=p;
                        contmax=1;
                        nmax=x;
                        endmax=x;
                    }
                    else if(p==valmax)
                    {
                        contmax++;
                        endmax=x;
                    }

                }
                v[i]/=10;
            }
        }
        fout<<valmin<<" "<<contmin<<" "<<nmin<<" "<<endmin<<'\n';
        fout<<valmax<<" "<<contmax<<" "<<nmax<<" "<<endmax<<'\n';

    }
    else
    {
        int frv[1000]={0},m=0;
        for(int i=0;i<n;i++)
        {

            while(v[i]>99)
            {
                int p=v[i]%1000;
                if(p>99)
                {
                    frv[p]++;
                    m=max(m,frv[p]);
                }
                v[i]/=10;

            }

        }
        fout<<m<<'\n';
        for(int i=100;i<1000;i++)
        {
            if(frv[i]==m)
                fout<<i<<" ";
        }

    }
    return 0;
}
