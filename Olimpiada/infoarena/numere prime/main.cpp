#include <iostream>
#include <fstream>
#include <bitset>

#define LIMIT 1500000
using namespace std;

ifstream fin("prim.in");
ofstream fout("prim.out");

bitset<LIMIT> ciur;
int main()
{
    int k,c=0,prim=0;
    fin>>k;

    ciur[0]=1;
    ciur[1]=1;
    for(int i=2;i<LIMIT;i++)
        if(ciur[i]==0)
        {
            c++;
            if(c>k)
            {
                prim=i;
                break;
            }

            for(int j=2;i*j<=LIMIT;j++)
                ciur[i*j]=1;
        }




    fout<<1ULL*prim*prim;


    return 0;
}
