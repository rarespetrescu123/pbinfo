#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("eratostene.in");
ofstream fout("eratostene.out");
int prime[1000001];
int main()
{
    int n,c=0,x;
    prime[0]=1;
    prime[1]=1;
    for(int i=2;i<=1000;i++)
        if(prime[i]==0)
            for(int j=2;i*j<=1000000;j++)
                prime[i*j]=1;
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>x;
        if(prime[x]==0)
            c++;
    }
    fout<<c;

    return 0;
}
