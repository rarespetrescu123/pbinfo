#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("2prim.in");
ofstream fout("2prim.out");
bool prim(int n)
{
    if(n==1)
        return false;
    else if(n==2)
        return true;
    if(n%2==0)
        return false;
    else
        for(int i=3;i*i<=n;i+=2)
            if(n%i==0)
                return false;
    return true;

}
int main()
{
    int n,x,c=0;
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>x;
        if(prim(x%100))
            c++;
    }
    fout<<c;

    return 0;
}
