#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,a,r,s=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>r;
        if(r==int(sqrt(a*a+3*a+1)))
            s++;

    }
    cout<<s;
    return 0;
}
