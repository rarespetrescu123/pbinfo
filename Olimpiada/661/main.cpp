#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,v[1000],i,j,c=0,left,right,mid;

    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];

    sort(v,v+n);

    for(i=0;i<n-2;i++)
        for(j=i+1;j<n-1;j++)
        {
            left=j+1;
            right=n-1;
            while(left<=right)
            {
                mid=(left+right)/2;
                if(v[mid]<v[i]+v[j])
                    left=mid+1;
                else
                    right=mid-1;
            }
            c+=(right-j);

        }
    cout<<c;

    return 0;
}
