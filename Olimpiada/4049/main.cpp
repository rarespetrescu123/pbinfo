#include <iostream>

using namespace std;

int main()
{
    int n,r=0,i;

    cin>>n;

    int originaln=n;
    while(n>0)
    {
        n/=10;
        r++;
    }

    cout<<originaln;
    for(i=0;i<originaln-r;i++)
        cout<<0;
    return 0;
}
