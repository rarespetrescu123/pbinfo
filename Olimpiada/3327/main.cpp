#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int p = 1;
    while(p*p<n)
        p++;
    p--;
    int k = p*p;
    cout<<n-k<<'\n';
    for(int i = 1;i<=p;i++)
    {
        for(int j=1;j<=p;j++)
        {
            cout<<k<<" ";
            k--;
        }
        cout<<'\n';

    }
    return 0;
}
