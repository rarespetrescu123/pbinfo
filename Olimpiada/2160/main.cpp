#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("prize.in");
ofstream fout("prize.out");

int main()
{
    long long int n,x,c=0;

    fin>>n;

    while(n)
    {
        fin>>x;
        c+=(x-1);
        n--;
    }
    c++;
    fout<<c;
    return 0;
}
