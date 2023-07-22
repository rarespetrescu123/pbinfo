#include <iostream>

using namespace std;

int main()
{
    int n;

    cin>>n;

    while(n>0)
    {
        if(n%10==0)
            n/=10;
        else
            break;
    }

    cout<<n;


    return 0;
}
