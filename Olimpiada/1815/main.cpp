#include <iostream>
#include <fstream>
#include <cmath>


using namespace std;
ifstream fin("unghi.in");
ofstream fout("unghi.out");

int main()
{
    int n,h,m,i;

    fin>>n;
    for(i=0;i<n;i++)
    {
        fin>>h;
        fin>>m;
        float uh,um;
        h=h%12;
        uh=30*h+0.5*m;
        um=6*m;
        float u=abs(uh-um);
        fout<<min(u,360-u);
        fout<<'\n';
    }

    return 0;
}
