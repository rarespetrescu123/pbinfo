#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("numere.in");
ofstream fout("numere.out");



int main()
{
    int n,x,c;
    fin>>c;
    if(c==1)
    {
        fin>>n;
        unsigned long long int nr=9;
        n-=3;
        while(n)
        {
            nr*=5;
            n--;
        }
        fout<<nr;
    }
    else
    {
        fin>>x;
        unsigned long long int originalx=x;
        unsigned long long int nrmax=812,nrmin=163,contor=3;
        while(x>999)
        {
            contor++;
            if(contor%2==0)
                nrmin*=10,nrmax=nrmax*10+9;
            else
                nrmin=nrmin*10+1,nrmax=nrmax*10+8;
            x/=10;
        }
        if(originalx<nrmin)
        {
            fout<<nrmin;
            return 0;
        }

        else if(originalx>nrmax)
        {
            fout<<nrmax;
            return 0;
        }

        unsigned long long int minx=0,maxx=0;
        for(unsigned long long int i=originalx-1;i>=nrmin;i--)
        {
            bool valid=true;
            int originali=i,original2i=i;
            while(originali>999)
                originali/=10;
            int t=originali%10;
            originali/=10;
            if(originali!=16 && originali!=25 && originali!=36 && originali!=49 && originali!=81)
            {
                valid=false;
            }

            else if((originali==25 || originali==49 || originali==81) && t!=2)
            {
                valid=false;
            }

            else if((originali==16 || originali==36) && (t!=3 && t!=5 && t!=7))
            {
                valid=false;
            }

            else
                for(int j=4;j<=contor;j++)
                {
                    if((original2i%10)%2==(original2i/10%10)%2)
                    {
                        valid=false;
                        break;
                    }
                    original2i/=10;
                }



            if(valid)
            {
                minx=i;
                break;
            }


        }
        for(unsigned long long int i=originalx+1;i<=nrmax;i++)
        {
            bool valid=true;
            int originali=i,original2i=i;
            while(originali>999)
                originali/=10;
            int t=originali%10;
            originali/=10;
            if(originali!=16 && originali!=25 && originali!=36 && originali!=49 && originali!=81)
                valid=false;
            else if((originali==25 || originali==49 || originali==81) && t!=2)
                valid=false;
            else if((originali==16 || originali==36) && (t!=3 && t!=5 && t!=7))
                valid=false;
            else
                for(int j=4;j<=contor;j++)
                {
                    if((original2i%10)%2==(original2i/10%10)%2)
                    {
                        valid=false;
                        break;
                    }
                    original2i/=10;
                }


            if(valid)
            {
                maxx=i;
                break;
            }

        }
        if(originalx-minx<=(maxx-originalx))
            fout<<minx;
        else
            fout<<maxx;

    }

    return 0;
}
