#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("cartonase.in");
ofstream fout("cartonase.out");

int v[500][2];

int main()
{
    int c,n;

    fin>>c>>n;
    for(int i=0;i<n;i++)
        fin>>v[i][0]>>v[i][1];

    if(c==1)
    {
        int contor=0;
        for(int i=0;i<n-1;i++)
        {
            if(v[i][1]==v[i+1][0])
                contor++;
        }
        fout<<contor;
    }
    else if(c==2)
    {
        int m=1;
        int maxim=0;
        for(int i=0;i<n-1;i++)
        {
            if(v[i][1]==v[i+1][0])
                m++;
            else
                maxim=max(maxim,m),m=1;
        }
        maxim=max(maxim,m);
        fout<<maxim;
    }
    else
    {
        int m=1;
        int maxim=0;
        int contorsecvente=0;
        for(int i=0;i<n-1;i++)
        {
            if(v[i][1]==v[i+1][0])
                m++;
            else
            {
                if(m==maxim)
                    contorsecvente++;
                else if(m>maxim)
                {
                    contorsecvente=1;
                    maxim=m;
                }
                m=1;
            }


        }
        if(m==maxim)
            contorsecvente++;
        else if(m>maxim)
            contorsecvente=1;

        fout<<contorsecvente;
    }


    return 0;
}
