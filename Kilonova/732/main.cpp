#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("ron.in");
ofstream fout("ron.out");

int main()
{
    int k,L,S;
    fin>>k>>L>>S;
    k++;
    int p=1;
    int c=0;
    while(p<k)
    {
        p*=3;
        c++;

    }

    if(c==L && c==S)
        fout<<'O';
    else if(c!=L && c!=S)
        fout<<'O';
    else if(c==L && c!=S)
        fout<<'L';
    else
        fout<<'S';

    return 0;
}
