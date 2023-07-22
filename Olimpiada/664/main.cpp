#include <iostream>

using namespace std;
int main()
{
    int n,x;
    long long int c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        c=1;
        int d=2;
        while(x>1)
        {
            int e=0;
            while(x%d==0)
            {
                x/=d;
                e++;
            }
            if(e)
                c*=(2*e+1);
            d++;
            if(x>1 && d*d>x)
                d=x;

        }
        cout<<c<<" ";



    }

    return 0;
}
