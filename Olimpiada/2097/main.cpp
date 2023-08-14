#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("vistiernic.in");
ofstream fout("vistiernic.out");

int main()
{
    int n,x,c2=0,c5=0;
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>x;
        while(x%2==0)
        {
            c2++;
            x/=2;
        }
        while(x%5==0)
        {
            c5++;
            x/=5;
        }
    }
    fout<<min(c2,c5);
    return 0;
}
