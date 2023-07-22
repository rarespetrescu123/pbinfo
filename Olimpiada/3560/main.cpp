#include <iostream>
#include <set>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
    int v[10],c[10]={0},dst[100],n,i,x,m,j=0,s,ps=0,k;

    cin>>n;

    for(i=0;i<=9;i++)
        v[i]=i;
    for(i=0;i<n;i++)
    {
        cin>>x;
        m=x;
        set<int> u;
        while(x)
        {
            c[x%10]++;
            u.insert(x%10);
            x/=10;
        }
        if(u.size()==2)
            dst[j++]=m;
    }
    //punctul a
    s=INT_MAX;
    for(i=0;i<=9;i++)
        if(c[i]<s)
            s=c[i],ps=i;
    cout<<ps<<'\n';

    //punctul b
    for(i=0;i<=9;i++)
        for(k=i+1;k<=9;k++)
            if(c[i]<c[k])
            {
                swap(c[i],c[k]);
                swap(v[i],v[k]);
            }
            else if(c[i]==c[k] &&v[i]<v[k])
                swap(v[i],v[k]);


    for(i=0;i<=9;i++)
        cout<<v[i]<<' ';
    cout<<'\n';

    //punctul c
    if(j==0)
        cout<<-1;
    else
    {
        sort(dst,dst+j);
        for(i=0;i<j;i++)
            cout<<dst[i]<<' ';
    }

    return 0;
}
