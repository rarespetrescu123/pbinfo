#include <iostream>

using namespace std;
int v[100];

int main()
{
    int n,k,p;
    cin>>n>>k>>p;
    v[0]=1;
    v[1]=2;
    int s=0,contor=0;
    for(int i=2;i<100;i++)
    {
        v[i]=(v[i-2]+v[i-1])%10;
    }
    p=p%60;
    for(int i=0;i<n;i++)
    {
        if(v[i]==2 || v[i]==3 || v[i]==5 || v[i]==7)
            s+=v[i];
        if(v[i]==k)
            contor++;

    }
    cout<<s<<'\n';
    cout<<contor<<'\n';
    if(p==0)
        cout<<1;
    else
        cout<<v[p-1];
    return 0;
}
