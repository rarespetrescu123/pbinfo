#include <iostream>

using namespace std;
bool prim(int x)
{
    if(x==1)
        return false;
    else if(x==2)
        return true;
    else if(x%2==0)
        return false;
    else
        for(int i=3;i*i<=x;i+=2)
            if(x%i==0)
                return false;
    return true;
}
int main()
{
    int n,m=0,nrapm=0,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(prim(x)==true && x>m)
        {
            m=x;
            nrapm=1;
        }
        else if(prim(x)==true && x==m)
            nrapm++;

    }
    cout<<m<<" "<<nrapm;
    return 0;
}
