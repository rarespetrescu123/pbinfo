#include <iostream>
#include <iomanip>

using namespace std;
double mad(int n)
{
    int s=0,c=0;
    for(int d=1;d*d<=n;d++)
        if(n%d==0 && n/d!=d)
        {
         s+=(d+n/d);
         c+=2;
        }
        else if(n%d==0 && n/d==d)
        {
            s+=d;
            c++;
        }

    return (double) s/c;
}

int main()
{
    int n;
    cin>>n;
    cout<<setprecision(2)<<fixed<<mad(n);

    return 0;
}
