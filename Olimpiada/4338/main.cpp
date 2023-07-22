#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int cfa=((a/10)%10);
    int cfb=((b/10)%10);
    if(cfa==cfb)
       cout<<a+b;
    else
    {
        if(cfa>cfb)
            cout<<a;
        else
            cout<<b;

    }
    return 0;
}
