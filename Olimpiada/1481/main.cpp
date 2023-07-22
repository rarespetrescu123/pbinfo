#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("pitic.in");
ofstream fout("pitic.out");
bool prim(int i)
{
    if(i==1)
        return false;
    else if(i==2)
        return true;
    else if(i%2==0)
        return false;
    else
        for(int j=3;j*j<=i;j+=2)
            if(i%j==0)
                return false;
    return true;
}
int sumdivprim(int i)
{
    int s=0;
    for(int j=2;j<=i;j++)
    {
        if(i%j==0 && prim(j))
        {
            s+=j;

        }


    }
    return s;
}
int main()
{
    int n;
    fin>>n;
    for(int i=1;i<=n;i++)
    {
        if(prim(i))
            fout<<i<<" ";
        else
            fout<<sumdivprim(i)<<" ";
    }

    return 0;
}
