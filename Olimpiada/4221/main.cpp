#include <iostream>

using namespace std;

int main()
{
    int a,b,mina=10,minb=10,maxa=0,maxb=0;

    cin>>a>>b;

    while(a>0)
    {
        mina=min(mina,a%10);
        maxa=max(maxa,a%10);
        a/=10;

    }
    while(b>0)
    {
        minb=min(minb,b%10);
        maxb=max(maxb,b%10);
        b/=10;
    }
    if(mina==maxb)
        cout<<mina;
    else if(minb==maxa)
        cout<<maxa;
    else
        cout<<"NU";


    return 0;
}
