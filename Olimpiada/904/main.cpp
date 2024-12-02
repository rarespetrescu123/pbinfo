#include <iostream>

using namespace std;

long long int concat(long int a, long long int b)
{
    int nrcifreb=0;
    int originalb=b;
    while(b>0)
    {
        nrcifreb++;
        b/=10;
    }
    int p=1;
    for(int i=0;i<nrcifreb;i++)
        p*=10;
    return a*p+originalb;
}
