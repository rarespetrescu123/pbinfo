#include <iostream>
#include <cmath>

using namespace std;

bool nrprime[1000001];

int main()
{
    int n,i,j;

    cin>>n;

    nrprime[1]=true;
    for(i=2;i<=sqrt(n);i++)
        if(!nrprime[i])
            for(j=2*i;j<=n;j+=i)
                nrprime[j]=true;
    for(i=2;i<=n;i++)
        if(!nrprime[i])
            cout<<i<<" ";

    return 0;
}
