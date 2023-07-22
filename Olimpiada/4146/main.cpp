#include <iostream>
#include <algorithm>

using namespace std;


int d10[1000];
int main()
{
    int n,poz=0,x;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%10==0)
        {
            d10[poz]=x;
            poz++;
        }

    }
    if(!poz)
        cout<<"NU EXISTA";
    else
    {
        sort(d10,d10+poz);
        for(int i=poz-1;i>=0;i--)
            cout<<d10[i]<<" ";

    }




    return 0;
}
