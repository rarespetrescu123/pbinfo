#include <iostream>

using namespace std;
int pn[200000],clasament[200000];
int main()
{
    int n,r,x,anterior=-1,loc=0;
    cin>>n;
    clasament[0]=1;
    for(int i=0;i<n;i++)
    {
        cin>>pn[i];

        if(pn[i]!=anterior)
            loc++;
        clasament[i]=loc;
        anterior=pn[i];
    }


    cin>>r;
    for(int i=0;i<r;i++)
    {
        cin>>x;
        int poz=-1;
        int left=0;
        int right=n-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(pn[mid]>x)
                left=mid+1,poz=mid;
            else
                right=mid-1;
        }
        if(poz==-1)
            cout<<1<<'\n';
        else
            cout<<clasament[poz]+1<<'\n';


    }



    return 0;
}
