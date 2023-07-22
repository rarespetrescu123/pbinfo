#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("robot4.in");
ofstream fout("robot4.out");


bool corect(int n)
{
    if((n%10)%2==1)
        return false;
    while(n!=0 && (n%10)%2==0)
    {
     int p=n%10;
     n/=10;
     if((n%10)%2==0 && n%10<p)
        return false;
    }
    if(n==0)
        return false;
    while(n!=0 && (n%10)%2==1)
    {
        int r=n%10;
        n/=10;
        if((n%10)%2==1 && n%10>r)
            return false;

    }

    return n==0;

}

int main()
{
    int q,h,m,s,n,t,v,r,nr[500],c,etcor=0;

    fin>>q;
    fin>>n>>h>>m>>s;
    fin>>t>>v>>r;
    for(int i=0;i<n;i++)
        {
            fin>>nr[i];
            c=nr[i];
            if(!corect(c))
            {
                int fr[10]={0};
                bool cifrapara=false;
                bool cifraimpara=false;
                while(c)
                {
                    fr[c%10]++;
                    if((c%10)%2==1)
                        cifraimpara=true;
                    else
                        cifrapara=true;
                    c/=10;
                }
                if(!cifraimpara)
                {
                    fr[9]=1;
                    for(int k=8;k>=0;k-=2)
                        if(fr[k])
                        {
                            fr[k]--;
                            break;
                        }
                }
                if(!cifrapara)
                {
                    fr[0]=1;
                    for(int l=1;l<=9;l+=2)
                        if(fr[l])
                        {
                            fr[l]--;
                            break;
                        }
                }

                int c1=0;
                for(int i=1;i<10;i+=2)
                    if(fr[i])
                        for(int j=0;j<fr[i];j++)
                        {
                            c1*=10;
                            c1+=i;
                        }
                if(c1==0)
                    c1=9;
                for(int i=8;i>=0;i-=2)
                    if(fr[i])
                        for(int j=0;j<fr[i];j++)
                        {
                            c1*=10;
                            c1+=i;
                        }
                if(c1%2==1)
                        c1*=10;
                nr[i]=c1;
                etcor++;

            }

        }
    if(q==1)
    {
     s+=(n-1)*(t+v)+v+etcor*r;
     m=m+s/60;
     s=s%60;
     h=h+m/60;
     m=m%60;
     fout<<h<<" "<<m<<" "<<s;

    }
    if(q==2)
    {
        for(int i=0;i<n;i++)
            fout<<nr[i]<<'\n';
    }





    return 0;
}
