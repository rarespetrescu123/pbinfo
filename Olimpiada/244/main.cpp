#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("cifreord.in");
ofstream fout("cifreord.out");
int frv[10];
int main()
{
    int n,x,c=0;

    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>x;
        frv[x]++;
    }
    for(int i=0;i<10;i++)
        for(int j=0;j<frv[i];j++)
        {
            fout<<i<<" ";
            c++;
            if(c==20)
            {
                fout<<'\n';
                c=0;
            }



        }





    return 0;
}
