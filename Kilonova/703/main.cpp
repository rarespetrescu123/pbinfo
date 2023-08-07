#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
ifstream fin("valori-panta.in");
ofstream fout("valori-panta.out");
bool panta(int n)
{
    int predcif=n%10;
    int originaln=n;
    int opredcif=n%10;
    n/=10;
    bool cres=true;
    bool descres=true;
    while(n)
    {
        if(predcif>n%10)
        {
            descres=false;
            break;
        }
        else
        {
            predcif=n%10;
            n/=10;
        }
    }
    while(originaln)
    {
        if(opredcif<originaln%10)
        {
            cres=false;
            break;
        }
        else
        {
            opredcif=originaln%10;
            originaln/=10;
        }
    }
//    cout<<cres<<" "<<descres;
    return cres || descres;
}
int main()
{
    vector<int> pozmax;
    vector<int> pozmin;
    int n,x,maxp=0,minp=100000000,contor=0;
    fin>>n;
    for(int i=1;i<=n;i++)
    {
        fin>>x;
        if(panta(x))
        {
            contor++;
            if(x>maxp)
            {
                pozmax.clear();
                pozmax.push_back(i);
                maxp=x;
            }
            else if(x==maxp)
            {
                pozmax.push_back(i);
            }
            if(x<minp)
            {
                pozmin.clear();
                pozmin.push_back(i);
                minp=x;
            }
            else if(x==minp)
            {
                pozmin.push_back(i);
            }
        }
    }
    fout<<contor<<'\n';
    if(contor==0)
        fout<<"NU EXISTA";
    else
    {
        fout<<maxp<<" ";
        for(int i=0;i<pozmax.size();i++)
            fout<<pozmax[i]<<" ";
        fout<<'\n';
        fout<<minp<<" ";
        for(int i=0;i<pozmin.size();i++)
            fout<<pozmin[i]<<" ";
    }
    return 0;
}
