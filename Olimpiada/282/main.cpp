#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("pozmax.in");
ofstream fout("pozmax.out");

int main()
{
    int n,prima=1,ultima=1;
    float x,maxnr;

    fin>>n;
    fin>>maxnr;
    for(int i=2;i<=n;i++)
    {
        fin>>x;
        if(x>maxnr)
        {
            maxnr=x;
            prima=i;
            ultima=i;
        }
        else if(x==maxnr)
        {
            ultima=i;
        }
    }
    fout<<prima<<" "<<ultima;

    return 0;
}
