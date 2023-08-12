#include <iostream>

using namespace std;
int oglindit(int n)
{
    int r=0;
    while(n)
    {
        r*=10;
        r+=n%10;
        n/=10;
    }
    return r;
}
int main()
{
    int n,c=0;
    cin>>n;
    int r=oglindit(n);
    int p=r%10;
    r/=10;
    while(r)
    {
        if((r%10)<p)
            c++;
        r/=10;
    }
    cout<<c;
    return 0;
}
