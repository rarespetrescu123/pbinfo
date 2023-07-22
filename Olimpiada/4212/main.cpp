#include <iostream>

using namespace std;

int main()
{
    int n,c[10]={0},p=0,i;

    cin>>n;

    while(n>0)
    {
        c[p]=n%10;
        if(c[p]%2==0)
            c[p]++;
        p++;
        n/=10;
    }
    if(p==0)
        cout<<1;
    else
        for(i=p-1;i>=0;i--)
            cout<<c[i];




    return 0;
}
