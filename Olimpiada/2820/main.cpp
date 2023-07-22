#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("sir11.in");
ofstream fout("sir11.out");

int main()
{
    int n;
    fin>>n;

    for(int i=n;i>0;i--)
        if(i%2==0)
            fout<<-i/2<<" ";
        else
            fout<<(i+1)/2<<" ";



    return 0;
}
