#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n,maxim=0,minim=INT_MAX,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        maxim=max(maxim,x);
        minim=min(minim,x);
    }
    cout<<maxim+minim;

    return 0;
}
