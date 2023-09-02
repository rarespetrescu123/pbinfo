#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("tort.in");
ofstream fout("tort.out");

int cmmdc(int a, int b)
{
    if(b==0)
        return a;

    return cmmdc(b,a%b);
}
int main()
{
    int n,m;
    fin>>n>>m;
    int lat=cmmdc(n,m);
    fout<<(n/lat)*(m/lat)<<" "<<lat;
    return 0;
}
