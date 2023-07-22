#include <iostream>

using namespace std;

int main()
{
    int n,x,y,p,xi,yi,urcati=0,coborati=0;

    cin>>n>>x>>y>>p;

    if(p==1)
    {
        for(int i=0;i<n;i++)
    {
        cin>>xi>>yi;
        urcati+=xi;
        coborati+=yi;
    }
        cout<<urcati<<" "<<coborati<<" "<<urcati-coborati;
    }
    if(p==2)
    {
      for(int i=1;i<=x;i++)
    {
        cin>>xi>>yi;
        urcati+=xi;
        coborati+=yi;
    }
        if(urcati-coborati>=y)
            cout<<"DA";
        else
            cout<<"NU";

    }

    return 0;
}
