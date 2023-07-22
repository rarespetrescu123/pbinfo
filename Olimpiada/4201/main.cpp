#include <iostream>

using namespace std;

int main()
{
    int t,n,k,i=0,a[1001],m;
    long long int s=0;

    cin>>t;
    while(t)
    {
        cin>>n>>k;
        for(i=1;i<=n;i++)
            cin>>a[i];
        for(i=1;i<=k;i++)
        {
            m=a[i];
            for(int j=1;i+j*k<=n;j++)
                m=max(m,a[i+j*k]);
            s+=m;

        }
        cout<<s<<'\n';
        s-=s;
        t--;
    }
    return 0;
}
