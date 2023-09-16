#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("multimi.in");
ofstream fout("multimi.out");

int main()
{
    int n,a,b,minr=30001,maxnr=-1;
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>a>>b;
        if(a>maxnr)
            maxnr=a;
        if(b<minr)
            minr=b;
    }
    if(maxnr>minr)
        fout<<"multimea vida";
    else
    {
        for(int j=maxnr;j<=minr;j++)
            fout<<j<<" ";
    }

    return 0;
}
