#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("numerus.in");
ofstream fout("numerus.out");
int main()
{
    int k,c,n,nrl;
    fin>>k>>n;
    //cerinta a
    if(k%2==0)
    {
        c=k*5;
        fout<<c<<" "<<c<<" "<<c-1<<" "<<c-2<<" "<<c-3<<" "<<c-4<<'\n';
    }
    if(k%2==1)
    {
        c=k*5;
        fout<<c-4<<" "<<c-3<<" "<<c-2<<" "<<c-1<<" "<<c<<" "<<c<<'\n';
    }
    //cerinta b
    if(n%5!=0)
        nrl=n/5+1;
    else
        nrl=n/5;
    fout<<nrl<<'\n';

    //cerinta c
    if(nrl%2==0)
    {
        if(n%5==1)
            fout<<'F';
        if(n%5==2)
            fout<<'E';
        if(n%5==3)
            fout<<'D';
        if(n%5==4)
            fout<<'C';
        if(n%5==0)
            fout<<'A'<<" "<<'B';
    }
    else
    {
     if(n%5==1)
            fout<<'A';
        if(n%5==2)
            fout<<'B';
        if(n%5==3)
            fout<<'C';
        if(n%5==4)
            fout<<'D';
        if(n%5==0)
            fout<<'E'<<" "<<'F';
    }


    return 0;
}
