#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("amprenta.in");
ofstream fout("amprenta.out");

int main()
{
    long long int c,n,p,q,t;
    fin>>t;
    if(t==1)
    {
        fin>>n;
        int rest=n%11;
        if(rest>=6)
            fout<<11-rest;
        else
            fout<<rest;



    }
    else if(t==2)
    {
        long long int contor=0;
        fin>>p>>q>>c;
        if(p>q)
            swap(p,q);
        while(p%11!=0 && p<=q)
        {
            if(p%11==c || p%11==(11-c))
                contor++;
            p++;
        }
        while(q%11!=0 && q>=p)
        {
            if(q%11==c || q%11==(11-c))
                contor++;
            q--;
        }
        if(c==0)
            contor+=(q-p)/11+1;
        else
            contor+=2*((q-p)/11);



        fout<<contor;
    }
    return 0;
}
