#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("numere.in");
ofstream fout("numere.out");

int cifre2[16];

int main()
{
    int a,b,lgb2=0;
    fin>>a>>b;
    while(a)
    {
        cifre2[lgb2++]=a%2;
        a/=2;
    }
    lgb2--;
    while(lgb2>=0 && b%2==cifre2[lgb2])
    {
        b/=2;
        lgb2--;
    }
    a=0;
    for(int i=lgb2;i>=0;i--)
    {
        a*=2;
        a+=cifre2[i];
    }
    fout<<a+b;


    return 0;
}
