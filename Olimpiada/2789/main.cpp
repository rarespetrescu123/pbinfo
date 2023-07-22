#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
int v[10000];
long long int sp[10000];
int n;
int bs(long long int x)
{
        int left=0;
        int right=n-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(x==sp[mid])
            {
                return mid;
            }
            else if(sp[mid]>x)
                right=mid-1;
            else
                left=mid+1;
        }
        return right;

}

int main()
{
    ifstream fin("cb3.in");
    ofstream fout("cb3.out");

    int Q,i,j,x;

    fin>>n>>Q;
    for(i=0;i<n;i++)
        fin>>v[i];

    sort(v,v+n);

    sp[0]=v[0];
    for(j=1;j<n;j++)
        sp[j]=v[j]+sp[j-1];

    for(i=0;i<Q;i++)
    {
        fin>>x;
        fout<<bs(x)+1<<'\n';
    }




    return 0;
}
