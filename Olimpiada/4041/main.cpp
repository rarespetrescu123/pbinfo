#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int p=1;
    while(n)
    {
        n-=p;
        p++;
    }
    cout<<p+1;
    return 0;
}
