#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int s=a*a+a*a*a*a;

    int p=3*s/(s+sqrt(s))+sqrt(s);
    cout<<p;

    return 0;
}
