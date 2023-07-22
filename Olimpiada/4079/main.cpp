#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("ceas.in");
ofstream fout("ceas.out");
int main()
{
    int c,x,n,a;
    fin>>c>>x>>n;
    if(c==1)
    {
        int cntcif=0;
        for(int i=0;i<n;i++)
        {
            fin>>a;
            if(a==0 && x==0)
                cntcif++;
            while(a)
            {
                if(a%10==x)
                    cntcif++;
                a/=10;
            }
        }
        fout<<cntcif;
    }
    else
    {
        int nrtaieturi=0;
        for(int i=0;i<n;i++)
        {
            fin>>a;
            while(a>12)
            {
                int u2=a%100;
                if(10<=u2 && u2<=12)
                    a/=100;
                else
                    a/=10;
                nrtaieturi++;
            }
        }
        fout<<nrtaieturi;
    }
    return 0;
}
