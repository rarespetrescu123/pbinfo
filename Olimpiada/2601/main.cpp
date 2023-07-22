#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b,c;
    a=n%10;
    b=n/10%10;
    c=n/100%10;
    cout<<a*a+b*b+c*c;
    return 0;
}
