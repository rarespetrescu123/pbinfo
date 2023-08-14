#include <iostream>

using namespace std;
int cmmdc(int a,int b)
{
    if(b==0)
        return a;
    else
        return cmmdc(b,a%b);
}
int main()
{
    int n,k,m,p;
    cin>>n>>k>>m>>p;
    int x=n*k;
    int y=m*p;
    int c=cmmdc(x,y);
    int a=(x+y)/c;
    int g=x/c;
    int h=y/c;
    cout<<a<<" "<<g<<" "<<h<<" "<<c;
    return 0;
}
