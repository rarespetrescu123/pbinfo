#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("parcare.in");
ofstream fout("parcare.out");

int main()
{
    int z1,l1,h1,m1,z2,l2,h2,m2,t,cer,minute=0,zile=0,ore=0,a=0;

    fin>>z1>>l1>>h1>>m1;
    fin>>z2>>l2>>h2>>m2;
    fin>>t;
    fin>>cer;


    if(z1==z2)
     {
         int x=h2-h1;
         minute=60*x+(m2-m1);
     }
     else
     {
         if(z2<z1)
         {
          if(l1==1 || l1==3 || l1==5 || l1==7 || l1==8 || l1==10 || l1==12)
            zile=(31-z1)+z2;
          else if(l1==4 || l1==6 || l1==9 || l1==11)
            zile=(30-z1)+z2;
          else
            zile=(28-z1)+z2;

         }
         else
         {
          zile=z2-z1;
         }
         if(h2<h1)
            {
                ore=(24-h1)+h2;
                zile--;
            }
         else
            ore=h2-h1;
         if(m2<m1)
            {
                minute=(60-m1)+m2;
                ore--;
            }
         else
            minute=m2-m1;
         minute+=60*ore+24*60*zile;
     }
     if(cer==1)
        fout<<minute;
     else
     {
         if(minute<=15)
            fout<<0;
         else
         {
          a=minute/60;
          if(minute%60!=0)
            a++;
          fout<<a*t;

         }
     }




    return 0;
}
