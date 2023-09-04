#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("gardul.in");
ofstream fout("gardul.out");

int cmmdc(int a, int b)
{
    if(b==0)
        return a;
    else
        return cmmdc(b,a%b);
}

int main()
{
    int n,p,q;
    fin>>n;
    fin>>p>>q;

    int c=(p*q)/cmmdc(p,q);
    int val1=n-n/p-n/q+n/c;
    int val2=n/p-n/c;
    int val3=n/q-n/c;
    int val4=n/c;
    fout<<val1;
    fout<<endl;
    fout<<val2;
    fout<<endl;
    fout<<val3;
    fout<<endl;
    fout<<val4;
    return 0;
}
