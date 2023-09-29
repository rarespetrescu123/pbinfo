#include <iostream>

using namespace std;
int cifre[10],numar[10];
int main()
{
    int n,k,c=0,poz=0;
    cin>>n>>k;
    while(n)
    {
        cifre[c]=n%10;
        n/=10;
        c++;
    }
    for(int i=c-1;i>=0;i--)
    {
        numar[poz]=cifre[i];
        poz++;
    }
    k--;
    if(numar[k]==9)
        numar[k]=0;
    else
        numar[k]++;
    for(int i=0;i<c;i++)
        cout<<numar[i];

    return 0;
}
