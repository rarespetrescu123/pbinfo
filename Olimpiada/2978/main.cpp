#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("aur.in");
ofstream fout("aur.out");
int catecifr(int n)
{
    int s=0;
    while(n)
    {
        s++;
        n/=10;
    }
    return s;
}
int rasturnat(int x)
{
    int r=0;
    while(x)
    {
        r*=10;
        r+=x%10;
        x/=10;
    }
    return r;
}
unsigned char x[900000];
int main()
{
    int c,n,s=0,k,r=1,p,m;
    fin>>c;
    if(c==1)
    {
     fin>>n;

     for(int i=0;i<n;i++)
     {
         fin>>m;
         s+=catecifr(m);

     }
     fout<<s;

    }

    else if(c==2)
    {
     fin>>n>>k;
     for(int i=0;i<n;i++)
     {
         int cifra;
         fin>>m;
         int originalm=m;
         m=rasturnat(m);
         while(originalm%10==0)
             {
                 r++;
                 cifra=m%10;
                 originalm/=10;
                 if(r-1==k)
                 {
                     fout<<0;
                     break;
                 }
             }
         while(m)
         {


             cifra=m%10;
             m/=10;
             r++;
             if(r-1==k)
            {
                fout<<cifra;
                break;
            }
         }

     }


    }
    else if(c==3)
    {
     fin>>n>>p;
     int poz=0,q;
     unsigned long long int maxim=0;
     for(int i=0;i<n;i++)
     {
        fin>>q;
        int originalq=q;
        q=rasturnat(q);
        while(originalq%10==0)
        {
            poz++;
            originalq/=10;
        }
        while(q)
        {
            x[poz]=q%10;
            poz++;
            q/=10;
        }
     }
     for(int i=0;i<poz-p;i++)
     {
      unsigned long long int h=0;
      for(int j=i;j<i+p;j++)
      {
        h*=10;
        h+=x[j];
      }
      if(h>maxim)
        maxim=h;

     }

     fout<<maxim;
    }


    return 0;
}
