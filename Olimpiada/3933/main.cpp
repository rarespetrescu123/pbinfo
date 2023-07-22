#include <iostream>

using namespace std;

int main()
{
    int n,c0=0,c1=0;
    bool altacifra=false;

    cin>>n;

    while(n)
    {
        if(n%10==0)
        {
            c0++;
            n/=10;
        }
        else if(n%10==1)
        {
            c1++;
            n/=10;
        }
        else
            {
                altacifra=true;
                break;
            }

    }
    if(c0>=1 && c1>=1 && !altacifra)
        cout<<"da";
    else
        cout<<"nu";


    return 0;
}
