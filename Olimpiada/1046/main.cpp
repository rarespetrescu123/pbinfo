#include <iostream>
#include <fstream>
#define MAX 200000

using namespace std;
ifstream fin("munte.in");
ofstream fout("munte.out");
int v[101];
int main()
{
    bool varfgasit=true;
    int n,c=0;

    fin>>n;
    for(int i=0;i<n;i++)
        fin>>v[i];


    for(int i=1;i<n-1;i++)
        if(v[i-1]<v[i] && v[i+1]<v[i])
        {
            c++;
            v[i]=MAX;
        }
    for(int i=0;i<n;i++)
    {
        if(v[i]==MAX)
        {
            for(int j=i;j<n;j++)
                v[j]=v[j+1];
        }
    }
    n-=c;
    fout<<c<<'\n';
    while(varfgasit)
    {
        varfgasit=false;
        int varfuri=0;
        for(int i=1;i<n-1;i++)
        if(v[i-1]<v[i] && v[i+1]<v[i])
        {
            c++;
             //           cout<<i<<" "<<v[i]<<'\n';
            v[i]=MAX;
            varfgasit=true;
            varfuri++;
        }

        for(int i=0;i<n;i++)
        {
            if(v[i]==MAX)
            {
                for(int j=i;j<n;j++)
                    v[j]=v[j+1];
            }
        }
        n-=varfuri;

    }

    fout<<c<<'\n';
    fout<<n<<'\n';

    return 0;
}
