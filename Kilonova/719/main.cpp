#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>

#define MAXL 10

using namespace std;
ifstream fin("templu.in");
ofstream fout("templu.out");

int v[MAXL][MAXL];
int sume[MAXL+1];
bool sortalfabetic(int a, int b)
{
    return to_string(a)<=to_string(b);
}
int rasturnat(int n)
{
    int r=0;
    while(n)
    {
        r*=10;
        r+=n%10;
        n/=10;
    }
    return r;
}
int main()
{
    int n,lg,s=0,maxnr=0;
    vector<int> cifre;


    fin>>n>>lg;

    int stanga=0,dreapta=lg-1,valcurent=n;
    while(stanga<=dreapta)
    {
        for(int i=stanga;i<=dreapta;i++)
            for(int j=stanga;j<=dreapta;j++)
            {
                v[i][j]=valcurent;
            }
        valcurent++;
        stanga++;
        dreapta--;
    }
    for(int i=0;i<lg;i++)
    {
        int suma=0;
        for(int j=0;j<lg;j++)
            suma+=v[i][j];
        sume[i]=suma;
        s+=suma;

    }
    sume[lg]=s;
    sort(sume,sume+lg+1,sortalfabetic);
    for(int i=0;i<lg+1;i++)
    {
        fout<<sume[i];
        int ctzero=0;
        while(sume[i]%10==0)
        {
            ctzero++;
            sume[i]/=10;
        }
        sume[i]=rasturnat(sume[i]);
        while(sume[i])
        {
            cifre.push_back(sume[i]%10);
            sume[i]/=10;
        }
        for(int k=0;k<ctzero;k++)
            cifre.push_back(0);

    }
    fout<<endl;
    for(int i=0;i<cifre.size()-1;i++)
    {
        maxnr=max(maxnr,cifre[i]*10+cifre[i+1]);
    }
    fout<<maxnr;







    return 0;
}
