#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("neprietene.in");
ofstream fout("neprietene.out");

bool neprieten(long long int a,long long int b)
{
    int r[10]={0},q[10]={0},cifrecomune=0;
    while(a)
    {
        r[a%10]++;
        a/=10;
    }
    while(b)
    {
        q[b%10]++;
        b/=10;
    }
    for(int i=0;i<10;i++)
        if(r[i]>=1 && q[i]>=1)
            cifrecomune++;
    if(cifrecomune!=1)
        return false;
    else
    {
        for(int i=0;i<10;i++)
            for(int j=0;j<10;j++)
                if(r[i]>=1 && r[i]==q[j])
                    return false;

    }
    return true;

}

int main()
{
    long long int n,x,maxnr=0;
    fin>>n;
    while(fin>>x)
    {
        if(neprieten(n,x))
            maxnr=max(maxnr,x);
    }
    fout<<maxnr;

    return 0;
}
