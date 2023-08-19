#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("exponent.in");
ofstream fout("exponent.out");

int main()
{
    int n,k,c=0;
    fin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        int factor=i;
        while(factor%k==0)
        {
            factor/=k;
            c++;
        }
    }
    fout<<c;
    return 0;
}
