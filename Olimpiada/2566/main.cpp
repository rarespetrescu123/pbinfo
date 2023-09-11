#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("daruri.in");
ofstream fout("daruri.out");
int cmmdc(int a, int b)
{
    if(b==0)
        return a;
    else
        return cmmdc(b,a%b);
}
int main()
{
    int a,b;
    fin>>a>>b;
    int p=cmmdc(a,b);
    int q=a/p;
    int r=b/p;
    if(p==1)
    {
        fout<<0<<endl;
        fout<<0<<" "<<0;
    }
    else
    {
        fout<<p<<endl;
        fout<<q<<" "<<r;
    }


    return 0;
}
