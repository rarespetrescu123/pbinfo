#include <iostream>

using namespace std;

int main()
{
    long long int n,e=0,p=1;

    cin>>n;

    while(p<=n)
    {
        p*=2;
        e++;
    }

    cout<<e-1;
    return 0;
}
