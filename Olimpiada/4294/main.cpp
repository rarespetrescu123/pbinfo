#include <iostream>

using namespace std;

int main()
{
    int n,a,b;

    cin>>n;

    for(int i=1;i<=n/2;i++)
    {
        a=i;
        b=n-a;
        cout<<a<<" "<<b<<'\n';
    }
    return 0;
}
