#include <iostream>

using namespace std;

int main()
{
    int n,v[100],i,c=0,j,k;

    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];

    for(i=0;i<n-2;i++)
        for(j=i+1;j<n-1;j++)
            for(k=j+1;k<n;k++)
                if(v[i]+v[j]>v[k]&&v[i]+v[k]>v[j]&&v[j]+v[k]>v[i])
                    c++;
    cout<<c;

    return 0;
}
