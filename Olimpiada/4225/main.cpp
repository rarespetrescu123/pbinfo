#include <iostream>

using namespace std;

int main()
{
    int n,p=0,s=0;

    cin>>n;

    while(n)
    {
     if(n%10>p)
     {
         s+=n%10;
         p=n%10;

     }
     n/=10;
    }
    cout<<s;
    return 0;
}
