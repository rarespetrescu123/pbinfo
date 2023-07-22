#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
ifstream fin("rotire25.in");
ofstream fout("rotire25.out");

int proces1(int n)
{
    n*=5;
    int x=0;
    while(n)
    {
        if(n%10)
            x=x*10+n%10;
        n/=10;
    }

    return x;
}
int proces2(int n)
{
    n*=2;
    int x=0;
    while(n)
    {
        if(n%10)
        {
            x=x*10+n%10;
        }
        n/=10;
    }
    return x;
}

int ultimacifraputere(int n,int k)
{

    if(k==0)
        return 1;
    n=n%10;
    if(n==0 || n==1 || n==5 || n==6)
        return n;
    if(n==4)
    {
        if(k%2==0)
            return 6;
        else
            return 4;
    }
    if(n==9)
    {
        if(k%2==0)
            return 1;
        else
            return 9;
    }
    k=k%4;
    if(k==0)
        k=4;
    n=(int)pow(n,k);
    return n%10;
}

int main()
{
    int c,n,k;

    fin>>c>>n>>k;
    if(c==1)
    {
        int prcif=0,rasp=0;
        int originaln=n;


        while(originaln>=10)
            originaln/=10;
        prcif=originaln;
        fout<<prcif*ultimacifraputere(n,k);

    }
    else if(c==2)
    {
        int ultim=-1,penultim=-1;
        int j=0;
        while(k)
       {
           if(n==penultim)
                break;
           penultim=ultim;
           ultim=n;
           if(j%2==0)
            {
                n=proces1(n);
            }
           else
                n=proces2(n);
           k--;
           j++;

       }
       if(k%2==1)
       {
            if((k-j)%2==1)
                fout<<proces1(n);
            else
                fout<<proces2(n);
       }
       else
        fout<<n;





    }
    return 0;
}
