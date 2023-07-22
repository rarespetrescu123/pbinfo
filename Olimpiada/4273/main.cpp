#include <iostream>

using namespace std;

int main()
{
    long long int n,p=1;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        p*=i*i;
    }

    cout<<p;

    return 0;
}
