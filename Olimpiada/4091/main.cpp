#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("sss.in");
ofstream fout("sss.out");

int main()
{
    int n,v[100000],k,s=0,c;

    fin>>c>>n;
    for(int i=0;i<n;i++)
        fin>>v[i];
    if(c==1)
    {
     int originaln=v[0];
    while(originaln)
    {
        if(originaln%10!=0)
        {
            k=originaln%10;
            break;
        }
        else
            originaln/=10;
    }
    for(int i=n-1;i>=n-k;i--)
        s+=v[i];

    fout<<s;

    }
    if(c==2)
    {
     int p=1;
     int incep=n-1;
     int maximsuma=0;
     while(incep>=0)
     {
         for(int i=incep;i>incep-p;i--)
            s+=v[i];
        maximsuma=max(maximsuma,s);
        s=0;
        incep=incep-p;
        p++;

     }
     fout<<maximsuma;
    }



    return 0;
}
