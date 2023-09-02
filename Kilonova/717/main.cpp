#include <iostream>
#include <fstream>
#include <string>

using namespace std;
ifstream fin("sir.in");
ofstream fout("sir.out");

int main()
{
    int n;
    string a="a";
    string b="b";
    string c;
    fin>>n;
    for(int i=0;i<n-1;i++)
    {
        c=b;
        b=b+a;
        a=c;
    }
    fout<<a;

    return 0;
}
