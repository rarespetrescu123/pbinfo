#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("nrasoc.in");
ofstream fout("nrasoc.out");

int main()
{
    int a,b,c;
    fin>>a>>b;
    while(fin>>c && a>=c)
    {
        fout<<a<<" ";
        a=b;
        b=c;
    }
    if(!fin.eof())
        fout<<c<<" ";
    while(fin>>c)
        fout<<c<<" ";
    return 0;
}
