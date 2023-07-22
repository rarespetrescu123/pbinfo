#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("balaur.in");
ofstream fout("balaur.out");

int main()
{
    int n;

    fin>>n;
    fout<<5*n;
    return 0;
}
