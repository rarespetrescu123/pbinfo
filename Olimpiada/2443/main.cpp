#include <iostream>

using namespace std;

int cb(int a[],int x,int n)
{
        int left=0,right=n-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(a[mid]<=x)
                left=mid+1;
            else
                right=mid-1;
        }
        return right;
}

int v[100000],sumep[100000],maxime[100000];
int main()
{
    int n,x,s,q;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sumep[i]=sumep[i-1]+v[i];
    }
    for(int i = 0 ; i < n; i++)
        if(i==0)
            maxime[0]=v[0];
        else if(v[i]>maxime[i-1])
            maxime[i]=v[i];
        else
            maxime[i]=maxime[i-1];


    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>x>>s;
        int p1=cb(maxime,x,n);
        int p2=cb(sumep,s,n);
        cout<<min(p1+1,p2+1)<<'\n';
    }



    return 0;
}
