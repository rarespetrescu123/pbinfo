#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("cartonase1.in");
ofstream fout("cartonase1.out");

int cmmdc(int a, int b)
{
    if(b==0)
        return a;
    else
        return cmmdc(b,a%b);
}



int main()
{
    int n,cartipuse,prec,x;
    fin>>n;
    fin>>prec;
    if(prec==1)
    {
        fout<<1;
        return 0;
    }



    for(int i=2;i<=n;i++)
    {
        fin>>x;
        cartipuse=cmmdc(prec,x);
        if(cartipuse==1)
        {
            fout<<i;
            return 0;
        }
        prec=cartipuse;

    }
    fout<<-1;


    return 0;
}
