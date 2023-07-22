#include <iostream>

using namespace std;

int main()
{

    long long int p,n;
    cin>>n>>p;
    long long int x=1;
    while(x<=p)
    {
        cout<<x<<" ";
        x*=n;
    }

    return 0;
}
