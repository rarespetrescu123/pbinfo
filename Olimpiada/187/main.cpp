#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("ciffrecv.in");
ofstream fout("ciffrecv.out");
int frv[10];
int main()
{
    int x;
    while(fin>>x)
        frv[x]++;

    if(frv[7])
        fout<<7<<" "<<frv[7];

    else if(frv[5])
        fout<<5<<" "<<frv[5];
    else if(frv[3])
        fout<<3<<" "<<frv[3];
    else if(frv[2])
        fout<<2<<" "<<frv[2];
    return 0;
}
