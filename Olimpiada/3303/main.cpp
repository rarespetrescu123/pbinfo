#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("nrcurat.in");
ofstream fout("nrcurat.out");

int main()
{
    int n;

    while(fin>>n)
    {
        if(n%9==0)
            fout<<1<<' ';
        else
            fout<<0<<' ';
    }
    return 0;
}
