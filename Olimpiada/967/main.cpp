#include <iostream>

using namespace std;
bool prime(int n)
{
    if(n<=1)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(int i=3;i*i<=n;i+=2)
        if(n%i==0)
            return false;
    return true;
}
int cmmdc(int a, int b)
{
    if(b==0)
        return a;
    return cmmdc(b,a%b);
}

int main()
{
    int c,n,x,contor=0,c1=0,c3=0,c5=0,c7=0,c9=0;
    int s=0;
    cin>>n>>c;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        int originalx=x;
        if(prime(x))
            s+=x;
        while(x)
        {
            if(x%10==c)
                contor++;
            x/=10;
        }
        x=originalx;
        if(x%10==1)
            c1++;
        else if(x%10==3)
            c3++;
        else if(x%10==5)
            c5++;
        else if(x%10==7)
            c7++;
        else if(x%10==9)
            c9++;
    }
    int d1=cmmdc(c1,c3);
    int d2=cmmdc(c5,c7);
    int d3=cmmdc(d1,d2);
    int divizor=cmmdc(d3,c9);
    int q=(c1+c3+c5+c7+c9)/divizor;

    cout<<s<<'\n';
    cout<<contor<<'\n';
    cout<<q;

    return 0;
}
