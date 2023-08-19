#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("pinochio.in");
ofstream fout("pinochio.out");

int main()
{
    int n,p,k;
    fin>>n>>p>>k;
    int r=k%7;
    int c=k/7;
    n+=(p*5-2)*c;
    if(r<=5)
        n+=p*r;
    else
        n+=p*5-1;
    fout<<n;
    return 0;
}
