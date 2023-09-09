#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("vanatoare.in");
ofstream fout("vanatoare.out");

int main()
{
    int ka,kb,a=1,b=2,r=0;

    fin>>ka>>kb;

    while(true)
    {
        int sa=a/2;
        int sb=a/2;
        if(a%2==1)
            sa++;
        if(ka<sa || kb<sb)
            break;
        r++;
        int f=a;
        a=b;
        b=f+b;
        ka-=sa;
        kb-=sb;
    }

    fout<<r<<'\n'<<ka<<'\n'<<kb;


    return 0;
}
