#include <iostream>
#include <climits>

using namespace std;
bool prim(int n)
{
    if(n<2)
        return false;
    else if(n==2)
        return true;
    else if(n%2==0)
        return false;
    else
        for(int i=3;i*i<=n;i+=2)
            if(n%i==0)
                return false;
    return true;

}
int main()
{
    int n,x,maxprim=INT_MIN,minprim=INT_MAX;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(prim(x))
        {
            if(x>maxprim)
                maxprim=x;
            if(x<minprim)
                minprim=x;
        }
    }
    cout<<minprim+maxprim;
    return 0;
}
