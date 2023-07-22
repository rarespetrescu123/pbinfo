#include <iostream>

using namespace std;

int main()
{
    int n,k,x,s=0,contor=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%2==1)
            s+=x;
        if(x%k==0)
            contor++;
    }
    cout<<s<<" "<<contor;
    return 0;
}
