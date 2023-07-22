#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("maxcadou.in");
ofstream fout("maxcadou.out");
int main()
{
    int v[10]={0},i;
    long long int n;

    fin>>n;

    while(n>0)
    {
       v[n%10]++;
       n/=10;
    }

    for(i=9;i>=0;i--)
        if(v[i]!=0)
            for(int j=0;j<v[i];j++)
                fout<<i;


    return 0;
}
