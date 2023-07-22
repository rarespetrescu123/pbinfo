#include <iostream>
#include <bitset>

using namespace std;

bitset<200001> f;
bitset<200001> d;
int main()
{
    int x,c=0;
    while(cin>>x)
    {
        if(f[x])
            d[x]=1;


        else
            f[x]=1;
    }
    for(int i=0;i<=200000;i++)
    {
        if(f[i] && !d[i])
            c++;
    }
    cout<<c;

    return 0;
}
