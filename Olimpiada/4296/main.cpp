#include <iostream>

using namespace std;
int nrdiv(int n)
{
    int c=0;
    for(int i=1;i*i<=n;i++)
        if(n%i==0)
            c++;
    return c;

}

int main()
{
    int n,p,suma=0,x;
    cin>>n>>p;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(nrdiv(x)>=p)
            suma+=x;
    }
    cout<<suma;



    return 0;
}
