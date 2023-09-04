#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("cifre.in");
ofstream fout("cifre.out");

int nr1cifre[10],nr2cifre[10],frecvcifre[10];

int main()
{
    int a,b;
    bool cfcom=false;
    fin>>a>>b;
    while(a)
    {
        nr1cifre[a%10]++;
        frecvcifre[a%10]++;
        a/=10;
    }
    while(b)
    {
        nr2cifre[b%10]++;
        frecvcifre[b%10]++;
        b/=10;
    }
    for(int i=0;i<=9;i++)
    {
        if(nr1cifre[i]>=1 && nr2cifre[i]>=1)
        {
            fout<<i<<" ";
            cfcom=true;
        }

    }
    if(!cfcom)
        fout<<-1;
    fout<<endl;
    for(int i=9;i>=0;i--)
        for(int j=0;j<frecvcifre[i];j++)
            fout<<i;




    return 0;
}
