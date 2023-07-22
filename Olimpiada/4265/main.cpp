#include <iostream>
#include <algorithm>

using namespace std;
int v[160000];
int n;

int ctrbin(int j,int val,int limita)
{
    if(val+v[n-1]<=limita)
        return n-1;
    else if(val+v[j]>limita)
        return -1;
    int left=j,right=n-1;
    int mid,p=-1;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(val+v[mid]<=limita)
        {
            left=mid+1;
            p=mid;
        }
        else
            right=mid-1;


    }
    return p;
}

int main()
{
    int a,b;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i];
    cin>>a>>b;

    sort(v,v+n);
    long long cnt=0;
    for(int i=0;i<n;i++)
    {
        int j=ctrbin(i+1,v[i],b);
        if(j!=-1)
            cnt+=(j-i);

    }
    for(int i=0;i<n;i++)
    {
        int j=ctrbin(i+1,v[i],a-1);
        if(j!=-1)
            cnt-=(j-i);
    }
    cout<<cnt;
    return 0;
}
