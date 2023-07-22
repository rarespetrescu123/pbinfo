#include <iostream>

using namespace std;
bool prim(int x)
{
    if(x==1)
        return false;
    else if(x==2)
        return true;
    else if(x%2==0)
        return false;
    else
        for(int i=3;i*i<=x;i+=2)
            if(x%i==0)
                return false;
    return true;
}
int main()
{
    int a,b,contor=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        if(prim(i))
            contor++;
    cout<<contor;

    return 0;
}
