#include <iostream>

using namespace std;

int main()
{
    int n;
    unsigned long long int ag=2,au=2,r=3;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        unsigned long long int nouag,nouau,nour;
        nouag=ag+au;
        nouau=ag+r;
        nour=ag+au+r;
        ag=nouag;
        au=nouau;
        r=nour;
    }
    cout<<ag<<" "<<au<<" "<<r;
    return 0;
}
