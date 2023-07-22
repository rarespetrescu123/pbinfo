#include <iostream>

using namespace std;

int main()
{
    int n;
    long long int a,b,s=0,maxim;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cin>>a,b;
        maxim=max(a,b);
        s+=maxim;
    }
    cout<<s;

    return 0;
}
