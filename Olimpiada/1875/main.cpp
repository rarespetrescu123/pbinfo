#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("platou1.in");
ofstream fout("platou1.out");

int main()
{
    int n,lgsecv=0,lgsecvmax=0,elsecv=0,prec=-1;
    while(fin>>n)
    {
        if(n==prec)
            lgsecv++;
        else
        {
            if(lgsecv>lgsecvmax)
            {
                lgsecvmax=lgsecv;
                elsecv=prec;
            }
            else if(lgsecv==lgsecvmax && prec<elsecv)
            {
                elsecv=prec;
            }
            lgsecv=1;
            prec=n;

        }
    }
    fout<<lgsecvmax<<" "<<elsecv;
    return 0;
}
