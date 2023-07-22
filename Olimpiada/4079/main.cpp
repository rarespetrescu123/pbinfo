#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("ceas.in");
ofstream fout("ceas.out");
int main()
{
    int c,x,n,a;
    fin>>c>>x>>n;
    if(c==1)
    {
        int cntcif=0;
        for(int i=0;i<n;i++)
        {
            fin>>a;
            while(a)
            {
                if(a%10==x)
                    cntcif++;
                a/=10;
            }
        }
        fout<<cntcif;
    }
    else
    {

    }
    return 0;
}
