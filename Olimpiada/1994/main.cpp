#include <iostream>

using namespace std;

int main()
{
    int ka,kb,a=1,b=2,r=0;

    cin>>ka>>kb;

    while(true)
    {
        int sa=a/2;
        int sb=a/2;
        if(a%2==1)
            sa++;
        if(ka<sa || kb<sb)
            break;
        r++;
        int f=a;
        a=b;
        b=f+b;
        ka-=sa;
        kb-=sb;
    }

    cout<<r<<'\n'<<ka<<'\n'<<kb;


    return 0;
}
