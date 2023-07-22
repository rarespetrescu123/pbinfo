#include <iostream>

using namespace std;
int cmmdc(int a,int b)
{
    if (b==0)
        return a;
    return cmmdc(b,a%b);
}

int main()
{
    int n,a,b,s=0;

    cin>>n;

    for(a=1;a<n;a++)
        for(b=a;b<=n;b++)
            if(cmmdc(a,b)==1)
            {
             s++;
            }
    cout<<s;
    return 0;
}
