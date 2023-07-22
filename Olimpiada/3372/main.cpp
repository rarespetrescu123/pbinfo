#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("bucati.in");
ofstream fout("bucati.out");

int rotestedreapta(int x)
{
    int originalx=x;
    int originalx2=x;
    int nrcifre=0;
    int maxcf=0;
    while(originalx)
    {
        originalx/=10;
        nrcifre++;
    }
    while(originalx2)
    {
        maxcf=max(maxcf,originalx2%10);
        originalx2/=10;
    }


}

int main()
{
    int c,n;

    fin>>c;
    fin>>n;

    if(c==1)
    {

    }
    else
    {

    }

    return 0;
}
