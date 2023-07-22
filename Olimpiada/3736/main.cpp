#include <iostream>
#include <fstream>

using namespace std;
ifstream fin ("sir.in");
ofstream fout("sir.out");

int main()
{
    int n,c,x,i;

    fin>>c>>n;

    if(c==1)
    {
     int p=0,maxstanga=0;
     for(i=1;i<=n;i++)
     {
         fin>>x;
         if(x>=maxstanga)
         {
             maxstanga=x;
             p=i;
         }
     }
     fout<<p;

    }
    if(c==2)
    {
        int maxdreapta=0;
     for(i=1;i<=n;i++)
     {
         fin>>x;
         if(x>maxdreapta)
         {
             fout<<i<<" ";
             maxdreapta=x;
         }

     }
    }
    if(c==3)
    {
     int s=0,maxim=0,p=0;
     for(i=1;i<=n;i++)
     {
         fin>>x;
         if(x>maxim)
            {
                maxim=x;
                p=0;
            }
         else
            p+=(maxim-x);
         if(x==maxim)
            s=p;
     }
     fout<<s;
    }


    return 0;
}
