#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("visul.in");
ofstream fout("visul.out");

bool prim(int n)
{
    if(n==1)
        return false;
    else if(n==2)
        return true;
    else if(n%2==0)
        return false;
    for(int i=3;i*i<=n;i+=2)
        if(n%i==0)
            return false;
    return true;
}
bool v[100];

int main()
{
    int n;
    long long int x;
    int cifre[]={1,3,7,9};
    fin>>n;
    if(n==1 || n==10)
    {
        fout<<"Nu exista";
        return 0;
    }
    x=n;
    for(int i=0;i<n-1;i++)
    {
        int d=x%10;
        for(int j=0;j<4;j++)
        {
            int f=d*10+cifre[j];
            if(prim(f) && !v[f])
            {
                x*=10;
                x+=cifre[j];
                v[f]=true;
                break;
            }
        }
    }
    fout<<x;


    return 0;
}
