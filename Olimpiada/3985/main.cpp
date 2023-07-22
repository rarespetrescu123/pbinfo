#include <iostream>

using namespace std;

int main()
{
    int n,x,s=0;

    cin>>n;
    while(n)
    {
     cin>>x;
     if(x>9 && x<100)
            s+=x;
     n--;
    }
    cout<<s;
    return 0;
}
