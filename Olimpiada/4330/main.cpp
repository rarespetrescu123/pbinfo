#include <iostream>

using namespace std;

int main()
{
    int n,d1,d2;
    cin>>n;
    for(int i=2;i<=n;i++)
        if(n%i==0)
        {
            d1=i;
            break;
        }
    for(int j=d1+1;j<=n;j++)
        if(n%j==0)
        {
            d2=j;
            break;
        }
    cout<<d1+d2;

    return 0;
}
