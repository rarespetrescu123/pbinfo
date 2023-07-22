#include <iostream>

using namespace std;

inline bool numai1(int n)
{
    while(n)
    {
        if(n%2==0)
            return false;
        n/=2;

    }
    return true;
}

int main()
{
    int n,c=0,maxsize=0,x;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(((x+1)&x)==0)
            c++;
        else
        {
            maxsize=max(maxsize,c);
            c=0;
        }

    }
    cout<<maxsize;


    return 0;
}
