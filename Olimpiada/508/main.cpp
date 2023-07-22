#include <iostream>

using namespace std;

int x[25000];


int main()
{
    int n,m,left,right,mid,y,i;
    int found;

    cin>>n;
    for(i=0;i<n;i++)
        cin>>x[i];
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>y;
        left=0;
        right=n-1;
        found=0;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(y==x[mid])
            {
               found=1;
               break;
            }
            else if(y<x[mid])
                right=mid-1;
            else
                left=mid+1;
        }
        cout<<found<<" ";

    }

    return 0;
}
