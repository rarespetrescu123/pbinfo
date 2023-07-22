#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("tablita.in");
ofstream fout("tablita.out");

int main()
{
    int N,i=1,s=0;

    fin>>N;

    while(s+i<N)
    {
        s+=i;
        i++;
    }
    fout<<i;
    return 0;
}
