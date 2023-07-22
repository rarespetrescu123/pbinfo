#include <iostream>

using namespace std;
int cmmdc(int a,int b)
{
    if(b==0)
        return a;
    return cmmdc(b,a%b);
}

int main()
{
    int a,b;

    cin>>a>>b;

    cout<<a*b/(cmmdc(a,b)*cmmdc(a,b))<<" "<<cmmdc(a,b);
    return 0;
}
