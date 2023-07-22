#include <iostream>
#include <fstream>

using namespace std;

long long int c[10000];

int main()
{
    ifstream fin("clase.in");
    ofstream fout("clase.out");

    int n,m,cnt=0,i,left,right,mid;
    long long int x;
    fin>>n;
    for(i=0;i<n;i++)
        fin>>c[i];
    fin>>m;


    for(i=0;i<m;i++)
    {
        fin>>x;
        left=0;
        right=n-1;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(x==c[mid])
                {
                    cnt++;
                    break;
                }
            else if(x<c[mid])
                right=mid-1;
            else
                left=mid+1;
        }

    }
    fout<<cnt;



    return 0;
}
