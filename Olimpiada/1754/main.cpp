#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("munti.in");
ofstream fout("munti.out");

int main()
{
    int n,x;
    long long int s=0;

    fin>>n;

    for(int i=0;i<n;i++)
    {
        fin>>x;
        s+=x;
    }

    if(s%n==0)
        fout<<n;
    else
        fout<<n-1;
    return 0;
}
