#include <iostream>
#include <algorithm>

using namespace std;

int v[100000],pow2[32];
int main()
{
    // fast I/O
    cin.tie(0)->sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,c=0,pozstanga,pozdreapta;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i];

    pow2[0]=1;
    for(int i=1;i<32;i++)
            pow2[i]=pow2[i-1]*2;
    sort(v,v+n);
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<32;j++)
        {
            int x=pow2[j]-v[i];
            if(x<0)
                continue;
            int left=i+1;
            int right=n-1;
            pozstanga=-1;
            while(left<=right)
            {
                int mid=(left+right)/2;

                if(x==v[mid])
                {
                    pozstanga=mid;
                    right=mid-1;
                }
                else if(x<v[mid])
                {
                    right=mid-1;
                }
                else
                    left=mid+1;

            }
            if(pozstanga<0)
                continue;
            left=i+1;
            right=n-1;
            pozdreapta=-1;
            while(left<=right)
            {
                int mid=(left+right)/2;

                if(x==v[mid])
                {
                    pozdreapta=mid;
                    left=mid+1;
                }
                else if(x>v[mid])
                {
                    left=mid+1;
                }
                else
                    right=mid-1;
            }
            int q=pozdreapta-pozstanga+1;
            if(pozstanga>=0)
                c+=q;
        }
    }
    cout<<c;

    return 0;
}
