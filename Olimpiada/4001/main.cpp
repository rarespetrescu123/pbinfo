#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int k,pozmax=-1,pozmin=-1,nrmax=INT_MIN,nrmin=INT_MAX,x,poz=1;
    cin>>k;
    while(cin>>x)
    {
        if(x==0)
            break;
        if(x%10==k)
        {
            if(x>nrmax)
            {
                nrmax=x;
                pozmax=poz;
            }
            if(x<nrmin)
            {
                nrmin=x;
                pozmin=poz;
            }
        }

        poz++;
    }
    if(pozmin==-1)
        cout<<"NU EXISTA";
    else
        cout<<abs(pozmin-pozmax)+1;
    return 0;
}
