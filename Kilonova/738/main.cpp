#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("ucif.in");
ofstream fout("ucif.out");

int main()
{
    int n,ucif=0,p=1;
    fin>>n;
    for(int i=1;i<=n;i++)
    {
        p=1;
        for(int j=1;j<=i;j++)
        {
            p*=i;
            p=p%10;
        }
        ucif+=p;
        ucif=ucif%10;
    }
    fout<<ucif;


    return 0;
}
