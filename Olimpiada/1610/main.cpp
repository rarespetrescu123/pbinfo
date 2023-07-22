#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("colier.in");
ofstream fout("colier.out");
int tip(int x)
{
    int rasturnat=0,cifmax=0,cifmin=10;
            while(x)
            {
                rasturnat*=10;
                int r=x%10;
                rasturnat+=r;
                cifmax=max(r,cifmax);
                cifmin=min(r,cifmin);
                x/=10;
            }
            while(rasturnat)
            {
                if(rasturnat%10==cifmax)
                    return 2;
                if(rasturnat%10==cifmin)
                {
                    return 1;
                }
                rasturnat/=10;
            }
    return 0;
}
int main()
{
    int t,n,x,c=0;
    fin>>t;
    fin>>n;
    if(t==1)
    {
        for(int i=0;i<n;i++)
        {
            fin>>x;
            int rasturnat=0,cifmax=0,cifmin=10;
            while(x)
            {
                rasturnat*=10;
                int r=x%10;
                rasturnat+=r;
                cifmax=max(r,cifmax);
                cifmin=min(r,cifmin);
                x/=10;
            }
            while(rasturnat)
            {
                if(rasturnat%10==cifmax)
                    break;
                if(rasturnat%10==cifmin)
                {
                    c++;
                    break;
                }
                rasturnat/=10;
            }
        }
        fout<<c;
    }
    else if(t==2)
    {
        int pred=-1,c=0,prim=-1;
        for(int i=0;i<n;i++)
        {
            fin>>x;
            if(tip(x)==pred)
                c++;
            if(i==0)
                prim=tip(x);
            pred=tip(x);
        }
        if(pred==prim)
            c++;
        fout<<n-c;

    }

    return 0;
}
