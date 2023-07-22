#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("cod24.in");
ofstream fout("cod24.out");

int main()
{
    int n,a,b,c,d;
    fin>>n;
    a=n%10;
    if(a!=9)
        a++;

    b=n/10%10;
    if(b!=9)
        b++;

    c=n/100%10;
    if(c!=9)
        c++;

    d=n/1000;
    if(d!=9)
        d++;

    fout<<d*1000+c*100+a*10+b;
    return 0;
}
