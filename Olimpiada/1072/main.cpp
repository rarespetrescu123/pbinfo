#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("magic.in");
ofstream fout("magic.out");

int main()
{
    int ap[10]={0};
    char c;
    int n,i,x;

    fin>>n;
    for(i=1;i<=n;i++)
        {
            fin>>c;
            if(c>='a' && c<='z')
                fout<<(char)(c-32);
            else
                ap[c-'0']++;

        }
    fout<<'\n';

    x=1;
    while(ap[x]==0)
        x++;
    fout<<x;
    ap[x]=0;
    for(x=0;x<=9;x++)
        if(ap[x]>0)
            fout<<x;

    return 0;
}
