#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("pc.in");
ofstream fout("pc.out");

int main()
{
    int n,x,i;

    fin>>n;

    for(i=0;i<n;i++)
    {
        fin>>x;
        fout<<x%2<<" ";

    }


    return 0;
}
