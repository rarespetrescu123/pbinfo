#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("tort.in");
ofstream fout("tort.out");

int main()
{
    int m,n;
    fin>>m>>n;
    int p = m*n;
    int r = m%n;
    while(r!=0)
    {
        m=n;
        n=r;
        r=m%n;
    }

    int q = p/(n*n);
    fout<<q<<' '<<n;
    return 0;
}
