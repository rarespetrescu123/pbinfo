#include <iostream>

using namespace std;
int nrcifre(int n)
{
    int s=0;
    if (n==0)
        return 1;
    while(n)
    {
     s++;
     n/=10;
    }
    return s;
}

int main()
{
    int n,x,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(nrcifre(x)%2==1)
            c++;

    }
    cout<<c;
    return 0;
}
