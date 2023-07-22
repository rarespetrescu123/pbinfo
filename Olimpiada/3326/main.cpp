#include <iostream>

using namespace std;

int main()
{
    int n,m,o[20]={0},ms[20]={0},c=0,i;

    cin>>n>>m;

    for(i=0;i<m;i++)
    {
        char c;
        cin>>c;
        int i;
        cin>>i;
        ms[i-1]++;
        if(c=='D')
            o[i-1]++;
        else
            o[i-1]--;
    }
    for(i=0;i<n;i++)
        if(o[i]>0)
            cout<<i+1<<" ";
    cout<<'\n';
    int maxim=ms[0];
    for(i=0;i<n;i++)
        {
            if(ms[i]==0)
                c++;
            maxim=max(maxim,ms[i]);
        }
    for(i=0;i<n;i++)
        if(ms[i]==maxim)
            cout<<i+1<<" ";
    cout<<'\n'<<c;



    return 0;
}
