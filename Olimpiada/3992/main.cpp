#include <iostream>

using namespace std;

int main()
{
    int n,c=0,x;

    cin>>n;

    for(int i=0;i<n;i++)
    {
       cin>>x;
       if(10<=x && x<=99)
            c++;
    }
    cout<<c;
    return 0;
}
