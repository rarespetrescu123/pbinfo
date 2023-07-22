#include <iostream>

using namespace std;

int main()
{
    int n,maxdiv=1;
    cin>>n;
    int mindiv=n;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
        {
            mindiv=i;
            maxdiv=n/i;
            break;
        }
    cout<<maxdiv+mindiv;
    return 0;
}
