#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("planta.in");
ofstream fout("planta.out");

int main()
{
    int d,a,b,n;
    fin>>d>>a>>b>>n;



    if(n%2==0)
    {
        d+=(n/2)*(a-b);
    }
    else
    {
        d+=(n/2)*(a-b);
        d+=a;
    }
    fout<<d;



    return 0;
}
