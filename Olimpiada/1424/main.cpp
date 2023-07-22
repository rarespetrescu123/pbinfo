#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("smartphone.in");
ofstream fout("smartphone.out");

int main()
{
    int c,n,x,maxsmart=0,i,maxsmart2=0;

    fin>>c;
    fin>>n;
    for(i=0;i<n;i++)
    {
        fin>>x;
        if(x>maxsmart)
            {
                maxsmart2=maxsmart;
                maxsmart=x;
            }
        else if(x>maxsmart2)
            maxsmart2=x;

    }

    if (c==1)
        fout<<maxsmart;

    else
        fout<<maxsmart2;




    return 0;
}
