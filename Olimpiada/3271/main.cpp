#include <iostream>

using namespace std;
int cmmdc(int a, int b)
{
 if(b==0)
        return a;
 return cmmdc(b,a%b);
}

int main()
{
    int n,a,b,cmmdcmaxim=0,amax=0,bmax=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        int c=cmmdc(a,b);
        if(c>cmmdcmaxim)
        {
            cmmdcmaxim=c;
            amax=a;
            bmax=b;
        }
        else if(c==cmmdcmaxim)
        {
            if(a+b>amax+bmax)
            {
              amax=a;
              bmax=b;
            }


        }

    }
    cout<<amax<<" "<<bmax;


    return 0;
}
