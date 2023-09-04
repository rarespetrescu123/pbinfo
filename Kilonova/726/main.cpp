#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("concurs.in");
ofstream fout("concurs.out");

int rasturnat(int x)
{
    int r=0;
    while(x)
    {
        r*=10;
        r+=x%10;
        x/=10;
    }
    return r;
}

int main()
{
    int h,n,x,c1=0,c2=0;
    bool hjuc=false;
    fin>>h;
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>x;
        if(x==h)
            hjuc=true;
        int r=rasturnat(x);
        int r2=rasturnat(h);
        if(r%10==r2%10)
        {
            c1++;
            if(r/10%10==r2/10%10)
                c2++;
        }

    }
    if(hjuc)
        fout<<"DA"<<endl;
    else
        fout<<"NU"<<endl;
    fout<<c1<<endl;
    fout<<c2<<endl;
    return 0;
}
