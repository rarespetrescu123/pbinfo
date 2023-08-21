#include <iostream>

using namespace std;

int main()
{
    char x;
    int k,s=0;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>x;
        s+=(x-'0');
    }

    if(s%k==0)
    {
        int cifra=s/k;
        for(int i=0;i<k;i++)
            cout<<cifra;
    }
    else
    {
        int cifra=s/k;
        int r=s%k;
        for(int i=0;i<k-r;i++)
            cout<<cifra;
        for(int i=0;i<r;i++)
            cout<<cifra+1;
    }
    return 0;
}
