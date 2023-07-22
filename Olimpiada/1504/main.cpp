#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("comori1.in");
ofstream fout("comori1.out");

int main()
{
    int n,poz=0,anterior=0,x;
    bool ordonat=true;

    fin>>n;

    while(n)
    {
        fin>>x;
        poz++;
        if(x<anterior)
        {
            ordonat=false;
            fout<<poz<<" ";
        }
        n--;
        anterior=x;
    }
    if (ordonat)
        fout<<0;
    return 0;
}
