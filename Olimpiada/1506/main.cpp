#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>

using namespace std;

ifstream fin("serbare1.in");
ofstream fout("serbare1.out");

struct student
{
    char nume[51];
    char prenume[51];
    int inaltime;
};
student v[100];
int f[151];

bool comparastudenti(student a,student b)
{
    if(a.inaltime>b.inaltime)
        return true;
    else if(a.inaltime==b.inaltime && strcmp(a.nume,b.nume)<0)
        return true;
    return false;

}

int main()
{
    int n,randuri=0;

    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>v[i].nume>>v[i].prenume>>v[i].inaltime;
        f[v[i].inaltime]++;

    }
    for(int i=0;i<=150;i++)
        if(f[i])
            randuri++;
    fout<<randuri<<'\n';

    sort(v,v+n,comparastudenti);
    int p=0;
    for(int i=150;i>0;i--)
    {
        if(f[i])
        {
            fout<<f[i]<<" ";
            for(int j=0;j<f[i];j++)
            {
             fout<<v[p].nume<<" "<<v[p].prenume<<" ";
             p++;
            }
            fout<<'\n';

        }


    }




    return 0;
}
