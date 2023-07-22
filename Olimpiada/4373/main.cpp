#include <iostream>

using namespace std;

long long int cmmdc(long long int a, long long b)
{
    if(b==0)
        return a;

    return cmmdc(b,a%b);

}

int main()
{
    long long int a,b;
    cin>>a>>b;
    long long int cmmmc=a*b/cmmdc(a,b);
    cout<<cmmmc/a+cmmmc/b-2;

    return 0;
}
