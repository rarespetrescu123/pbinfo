#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("pozitiiconsecutive.in");
ofstream fout("pozitiiconsecutive.out");

int main()
{
    int x,y;

    fin>>x>>y;
    fout<<y<<" "<<x<<" ";
    while(x>0)
    {
        int p=2*x-y+2;
        fout<<p<<" ";
        y=x;
        x=p;

    }


    return 0;
}
