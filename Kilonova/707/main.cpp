#include <iostream>
#include <fstream>
#define MAX_L 17000
using namespace std;
ifstream fin("sir.in");
ofstream fout("sir.out");

int v1[MAX_L],v2[MAX_L];

inline int oglindit(int n)
{
    int r=0;
    while(n)
    {
        r*=10;
        r+=n%10;
        n/=10;
    }
    return r;
}

int main()
{
    int n,length=1;

    fin>>n;

    v1[0]=1;
    for(int i=1;i<n;i++)
    {
        int length2=0,lungsecv=0,curent=v1[0];
        for(int j=0;j<length;j++)
        {
            if(v1[j]==curent)
            {
                lungsecv++;
            }
            else
            {
                lungsecv=oglindit(lungsecv);
                while(lungsecv)
                {
                    v2[length2++]=lungsecv%10;
                    lungsecv/=10;
                }
                v2[length2++]=curent;
                lungsecv=1;
            }
            curent=v1[j];
        }
        lungsecv=oglindit(lungsecv);
        while(lungsecv)
        {
            v2[length2++]=lungsecv%10;
            lungsecv/=10;
        }
        v2[length2++]=curent;

        length=length2;
        for(int k=0;k<length;k++)
            v1[k]=v2[k];
    }
    for(int i=0;i<length;i++)
        fout<<v1[i];

    return 0;
}
