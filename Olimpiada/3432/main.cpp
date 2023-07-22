#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("tai.in");
ofstream fout("tai.out");
bool prim(int n)
{
    if(n<=1)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(int i=3;i*i<=n;i+=2)
        if (n%i==0)
            return false;


    return true;
}

int main()
{
    int c,n,v[100],maxprim=0,i;

    fin>>c;
    fin>>n;
    for(int i=0;i<n;i++)
        fin>>v[i];

    if(c==1)
    {
     for(i=0;i<n;i++)
     {
      if(prim(v[i]))
          maxprim=max(maxprim,v[i]);
     }


     fout<<maxprim;
    }

    if(c==2)
    {
        for(i=0;i<n;i++)
        {
            int p=10;
            while(v[i]>=p)
            {
                int a=v[i]%p;
                int b=v[i]/p;
                p*=10;
                if(prim(a))
                    maxprim=max(maxprim,a);
                if(prim(b))
                    maxprim=max(maxprim,b);
            }
        }

        fout<<maxprim;
    }

    if(c==3)
    {

        for(i=0;i<n;i++)
        {
            int p=10;
            while(v[i]>=p)
            {
                int a=v[i]%p;
                int b=v[i]/p;
                p*=10;
                int q=10;
                while(a>=q)
                {
                    int x=a%q;
                    int y=a/q;
                    q*=10;
                    if(prim(x))
                        maxprim=max(maxprim,x);
                    if(prim(y))
                        maxprim=max(maxprim,y);
                }
                if(prim(b) && a>=10)
                    maxprim=max(maxprim,b);
                q=10;
                while(b>=q)
                {
                    int x=b%q;
                    int y=b/q;
                    q*=10;
                    if(prim(x))
                        maxprim=max(maxprim,x);
                    if(prim(y))
                        maxprim=max(maxprim,y);
                }
                if(prim(a) &&b>=10)
                    maxprim=max(maxprim,a);

            }
        }

        fout<<maxprim;
    }



    return 0;
}
