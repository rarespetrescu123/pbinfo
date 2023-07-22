#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("nr.in");
ofstream fout("nr.out");

int main()
{
    long long int k,n,x;
    fin>>k>>n>>x;
    int pow=1;
    //cerinta 1
    for(int i=0;i<k-1;i++)
        pow*=2;
    fout<<pow<<'\n';
    //cerinta 2
    long long int x=1;
    while(n>0)
    {
        n-=x;
        x*=2;
    }
    int contor=0;
    while(x>=1)
    {
        x/=2;
        contor++;
    }

    return 0;
}
