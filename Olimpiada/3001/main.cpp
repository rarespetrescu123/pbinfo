#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int n,a,r,s=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>r;
        if(r==a*a+3*a+1)
            s++;

    }
    cout<<s;
    return 0;
}
