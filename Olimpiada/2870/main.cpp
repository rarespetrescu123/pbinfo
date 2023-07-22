#include <iostream>
#include <fstream>
#include <climits>

using namespace std;

int main()
{
    ifstream fin("magie.in");
    ofstream fout("magie.out");

    int n,v[100],c=0,i,m=INT_MIN;

    fin>>n;
    for(i=0;i<n;i++)
        fin>>v[i];

    for(i=0;i<n;i++)
        if(2017-v[i]==12)
            c++;//punctul a

    for(i=0;i<n;i++)
    {
        int s=0;
        while(v[i])
        {
            s+=v[i]%10;
            v[i]/=10;
        }
        m=max(m,s);
    }

    fout<<c<<'\n'<<m;

    return 0;
}
