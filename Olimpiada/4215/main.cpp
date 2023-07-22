#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int n,p,originaln,m,nm;
    int cif=0;
    bool alipit=false;

    cin>>n;
    originaln=n;

    while(n)
    {
        cif++;
        n/=10;
    }
    for(long long int i=1;i<=cif/2;i++)
    {
        p=pow(10,i);
        m=originaln%p;
        nm=0;
        for(int j=1;j<=cif/i;j++)
        {
            nm*=p;
            nm+=m;
        }
        if(nm==originaln)
       {
          alipit=true;
          break;
       }

    }
    if(alipit)
        cout<<"DA";
    else
        cout<<"NU";

    return 0;
}
