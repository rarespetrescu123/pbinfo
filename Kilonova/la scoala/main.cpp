#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("lascoala.in");
ofstream fout("lascoala.out");

int main()
{
    int n;
    fin>>n;
    int k=1;
    while(n>k*k)
    {
        k++;
    }
    if(k*k>=n)
        k--;
    fout<<n-k*k;

    for(int i=k*k;i>0;i--)
    {
        if(i%k==0)
            fout<<'\n';
        fout<<i<<" ";
    }
    return 0;
}
