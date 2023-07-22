#include <iostream>

using namespace std;

int main()
{
    int a,b,nrmin=0,nrmax=0,cmax=0;
    cin>>a>>b;

    if(a%2==1)
        a++;

    for(;a<=b;a+=2)
    {
        int c=0;
        for(int i=1;i*i<=a;i++)
            if(a%i==0)
        {
            if(i%2==0)
                c++;
            if((a/i)%2==0 && a/i!=i)
                c++;

        }
        if(c>cmax)
        {
            cmax=c;
            nrmin=a;
            nrmax=a;
        }
        else if(c==cmax)

            nrmax=a;
    }
    cout<<cmax<<" "<<nrmin<<" "<<nrmax;

    return 0;
}
