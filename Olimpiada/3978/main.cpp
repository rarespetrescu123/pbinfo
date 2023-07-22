#include <iostream>

using namespace std;
int suma(int a, int b)
{
    int s=0;
    for(int i=a;i<=b;i++)
        s+=i;
    return s;
}
int main()
{
    int a,b,c;

    cin>>a>>b>>c;

    cout<<suma(a,b)<<" "<<suma(b,c)<<" "<<suma(a,c);
    return 0;
}
