#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int n=a/3;
    int m=b/3;
    if(n*3<a)
        n++;
    int cnt=m-n+1;


    int p=c/3;
    int q=d/3;
    if(p*3<c)
        p++;
    cnt+=q-p+1;

    cout<<cnt;

    return 0;
}
