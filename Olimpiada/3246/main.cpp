#include <iostream>

using namespace std;
int nrcifre(int x)
{
    int contor=0;
    while(x)
    {
        x/=10;
        contor++;
    }
    return contor;
}
int nrcifrepare(int x)
{
    int c=0;
    while(x)
    {
        if((x%10)%2==0)
        {
            c++;
            x/=10;
        }
        else
            x/=10;

    }
}
int nrcifreimpare(int x)
{
    int c=0;
    while(x)
    {
        if((x%10)%2==1)
        {
            c++;
            x/=10;
        }
        else
            x/=10;

    }
}
int main()
{
    int a,b,s=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(nrcifre(i)%2==0 && nrcifrepare(i)==nrcifreimpare(i))
            s+=i;

    }
    cout<<s;
    return 0;
}
