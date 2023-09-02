#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("joc.in");
ofstream fout("joc.out");


int main()
{
    int n;
    long long int x,sp=0;
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>x;
        if(x<=sp+1)
            sp+=x;
        else
            break;
    }
    fout<<sp;


    return 0;
}
