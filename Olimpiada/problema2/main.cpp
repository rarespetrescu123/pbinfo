#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("cerc.in");
ofstream fout("cerc.out");
int p[10001],prime[10000];
int main()
{
    int n,k,i,poz=1,c=1,poziti[1000];
    prime[0]=1;
    prime[1]=1;
    for(int i=2;i*i<10000;i++)
        if(prime[i]==0)
            for(int j=2*i;j<10000;j+=i)
                prime[j]=1;
    fin>>n>>k;
    for(int i=1;i<=n;i++)
        poziti[i]=i;
    for(int i=0;i<10000;i++)
    {
     if(prime[i]==0)
     {
        p[c]=i;
        c++;
     }

    }
    for(int i=1;i<=k;i++)
    {
        poz=1;
        for(int j=1;j<=p[i];j++)
        {
            int poznoua=poz+1;
            if(poznoua==n+1)
                poznoua=1;
            int aux=poziti[poz];
            poziti[poz]=poziti[poznoua];
            poziti[poznoua]=aux;
            poz=poznoua;
        }

    }
    for(int i=1;i<=n;i++)
    {
        if(poziti[i]==1)
        {
            poz=i;
            break;
        }
    }




    if(poz==1)
        fout<<poziti[2]<<" "<<poziti[n];
    else if(poz==n)
        fout<<poziti[1]<<" "<<poziti[n-1];
    else
        fout<<poziti[poz+1]<<" "<<poziti[poz-1];


    return 0;
}
