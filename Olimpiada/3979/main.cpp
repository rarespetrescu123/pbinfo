#include <iostream>

using namespace std;

int main()
{
    int n,c=0;

    cin>>n;

    while(n>0)
    {
        if(3<=n%10 && n%10<=7)
        {
            c+=n%10;
            n/=10;
        }
        else
            n/=10;
    }

    cout<<c;
    return 0;
}
