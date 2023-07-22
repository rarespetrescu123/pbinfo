#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("mmult.in");
ofstream fout("mmult.out");
int frv[1000001];
int main()
{
    int n,x,m;
    bool valid=true;

    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>x;
        frv[x]++;
        m=max(m,x);
    }
    for(int i=1;i<=m;i++)
    {
        if(frv[i]<frv[i+1])
        {
            valid=false;
            break;
        }

    }
    if(valid)
        fout<<frv[1];
    else
        fout<<-1;


    return 0;
}
