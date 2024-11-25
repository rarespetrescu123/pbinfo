#include <iostream>
#include <fstream>
#include <set>

using namespace std;
std::ifstream fin("aproape.in");
std::ofstream fout("aproape.out");
set<int> apropiate;
set<int> final;
int nrap(int c)
{
    int s=0,originalc=c;
    if(c==0)
        return 1;
    else
    {
        while(c>0)
        {
            if(c%10==0 || c%10==9)
                s+=1;
            else if(c%10==1 && c>=10)
                s+=2;
            else if(c%10==1 && c<10 && originalc>=10)
                s++;
            else if(c%10==1 && c<10 && originalc<10)
                s+=2;
            else
                s+=2;
            c/=10;
        }
        return s;
    }
}
void ap(int n,set<int> & destinatie)
{
    int originaln=n;
    int cifre[10]={0};
    int lg=0;
    if(n==0)
        lg=1;
    while(n)
    {
        cifre[lg]=n%10;
        lg++;
        n/=10;     
    }
    for(int i=0;i<lg;i++)
    {
        int nr=0;
        int cf=cifre[i];
        if(cifre[i]==0)
        {
            cifre[i]=1;
            for(int j=lg-1;j>=0;j--)
            {
                nr*=10;
                nr+=cifre[j];
            }
            destinatie.insert(nr);
        }
        else if(cifre[i]==9)
        {
            cifre[i]=8;
            for(int j=lg-1;j>=0;j--)
            {
                nr*=10;
                nr+=cifre[j];
            }
            destinatie.insert(nr);
        }
        else if(cifre[i]==1 && i==lg-1)
        {
            cifre[i]=2;
            for(int j=lg-1;j>=0;j--)
            {
                nr*=10;
                nr+=cifre[j];
            }
            destinatie.insert(nr);
            if(lg==1)
                destinatie.insert(0);
        }
        else
        {
            cifre[i]=cf+1;
            for(int j=lg-1;j>=0;j--)
            {
                nr*=10;
                nr+=cifre[j];
            }
            destinatie.insert(nr);
            nr=0;
            cifre[i]=cf-1;
            for(int j=lg-1;j>=0;j--)
            {
                nr*=10;
                nr+=cifre[j];
            }
            destinatie.insert(nr);
        }
        cifre[i]=cf;
    }
}
int main(void)
{
    int c,n;
    fin>>c;
    if(c==1)
    {
        fin>>n;
        if(n==0)
            fout<<1;
        else
        {
            int nrcf=0;
            while(n>0)
            {
              nrcf++;
              n/=10;
            }
            fout<<nrcf;
        }
        
    }
    else if(c==2)
    {
        fin>>n;
        fout<<nrap(n);
    }
    else if(c==3)
    {
        fin>>n;
        ap(n,apropiate);
        for(const int&i: apropiate)
        {
            ap(i,final);
        }
        fout<<final.size();
    }
    return 0;
}
