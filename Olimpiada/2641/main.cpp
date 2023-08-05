#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("af.in");
ofstream fout("af.out");

int main()
{
    char semn,egal;
    long long int n,nr1,nr2,nr3;
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>nr1>>semn>>nr2>>egal>>nr3;
        if(semn=='+')
        {
            if(nr1+nr2==nr3)
                fout<<"Adevarat";
            else
                fout<<"Fals";
        }
        if(semn=='-')
        {
            if(nr1-nr2==nr3)
                fout<<"Adevarat";
            else
                fout<<"Fals";
        }
        if(semn=='x')
        {
            if(nr1*nr2==nr3)
                fout<<"Adevarat";
            else
                fout<<"Fals";
        }
        if(semn==':')
        {

            if(nr2!=0 && nr1/nr2==nr3)
                fout<<"Adevarat";
            else
                fout<<"Fals";
        }
        fout<<'\n';
    }

    return 0;
}
