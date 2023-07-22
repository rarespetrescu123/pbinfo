#include <iostream>
#include <fstream>

int nrdivizoripari(int n)
{
    int c=0;
    if(n%2==0)
    {
        for(int d=1;d*d<=n;d++)
            if(n%d==0)
            {
                if(d%2==0)
                    c++;
                if(n/d!=d &&(n/d)%2==0)
                    c++;

            }

    }
    return c;
}

using namespace std;
ifstream fin("bomboane1.in");
ofstream fout("bomboane1.out");

int main()
{
    int x,y,a=0,b=0,n=0,d=0;
    fin>>x>>y;

    for(int i=x;i<=y;i++)
    {
        int p=nrdivizoripari(i);
        if(p>d)
        {
            d=p;
            n=1;
            a=i;
            b=i;
        }
        else if(p==d)
        {
            b=i;
            n++;
        }
    }
    fout<<a<<" "<<b<<" "<<n<<" "<<d;

    return 0;
}
