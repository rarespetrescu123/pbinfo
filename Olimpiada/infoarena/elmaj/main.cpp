#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("elmaj.in");
ofstream fout("elmaj.out");
int v[1000000];
int main()
{
    int n,c=1,elemaj;
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>v[i];
    }
    elemaj=v[0];
    for(int i=1;i<n;i++)
    {
        if(v[i]==elemaj)
            c++;
        else
        {
            c--;
            if(c==0)
            {
                elemaj=v[i];
                c=1;
            }

        }

    }
    c=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==elemaj)
            c++;
    }
    if(c>=n/2+1)
        fout<<elemaj<<" "<<c;
    else
        fout<<-1;
    return 0;
}
