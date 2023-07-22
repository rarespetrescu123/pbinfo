#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("robot3.in");
ofstream fout("robot3.out");

int main()
{
    int n,a=0,poz=0;
    char c;

    fin>>n;
    if(n==1)
    {
     while(!fin.eof())
     {
         fin>>c;
         if(c=='A')
            a++;
     }
     fout<<a;
    }
    else if(n==2)
    {
     fin>>c;
     while(c!='T')
     {
      if(c=='D')
      {
       fin>>c;
       poz+=(c-48);
       poz%=10;
      }
      else if(c=='S')
      {
       fin>>c;
       poz+=10;
       poz-=(c-48);
       poz%=10;
      }
      else
        fout<<poz;
      fin>>c;
     }
    }
    else
    {
     while(!fin.eof())
     {
         fin>>c;
         if(fin.eof())
            break;
         int d=c-48;
         if(d==poz)
            fout<<'A';
         else
         {
             if(d>poz)
             {
              if(d-poz<=10-d+poz)
                    fout<<'D'<<d-poz<<'A';
              else
                fout<<'S'<<10-d+poz<<'A';
             }
             else
             {
              if(poz-d<10+d-poz)
                    fout<<'S'<<poz-d<<'A';
              else
                fout<<'D'<<10+d-poz<<'A';
             }
         }
         poz=d;
     }
     fout<<'T';
    }
    return 0;
}
