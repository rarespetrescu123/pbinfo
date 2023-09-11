#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("vapoare.in");
ofstream fout("vapoare.out");

int cmmdc(int a, int b)
{
    if(b==0)
        return a;
    else
        return cmmdc(b,a%b);
}

int main()
{
    long long int x,y,z1,z2;
    fin>>x>>y;
    fin>>z1>>z2;
    long long int a=x*14+z1;
    long long int b=y*14+z2;
    long long int c=a*b/cmmdc(a,b);
    fout<<c;


    return 0;
}
