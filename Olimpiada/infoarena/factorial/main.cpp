#include <iostream>
#include <fstream>
#include <climits>

using namespace std;
ifstream fin("fact.in");
ofstream fout("fact.out");

unsigned long long int putericinci(unsigned long long int x)
{
    unsigned long long int c=0,p=5;

    while(p<=x)
    {
        c+=x/p;
        p*=5;
    }

    return c;
}

int main()
{
    unsigned long long int n;
    bool gasit=false;
    fin>>n;
    unsigned long long int poz=0;
    unsigned long long int stanga=1,dreapta=1E18;

    while(stanga<=dreapta)
    {
        unsigned long long int mijloc=stanga+(dreapta-stanga)/2;
        //cout<<stanga<<" "<<dreapta<<" "<<mijloc<<'\n';
        unsigned long long int x=putericinci(mijloc);
        if(x==n)
            dreapta=mijloc-1,poz=mijloc,gasit=true;
        else if(x<n)
            stanga=mijloc+1;
        else
            dreapta=mijloc-1;

    }
    if(n==0)
        fout<<1;
    else if(!gasit)
        fout<<-1;
    else
        fout<<poz-poz%5;

    return 0;
}
