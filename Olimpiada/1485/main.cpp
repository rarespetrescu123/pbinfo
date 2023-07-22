#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("jumatate1.in");
ofstream fout("jumatate1.out");
long long int cmmdc(long long int a,long long int b)
{
    if(b==0)
        return a;
    return cmmdc(b,a%b);

}

int main()
{
    long long int n,c=0,originaln,x,y,p=1,i;

    fin>>n;
    originaln=n;

    while(n>0)
    {
        c++;
        n/=10;
    }
    i=c/2+c%2;
    while(i>0)
    {
        p=p*10;
        i--;
    }
    x=originaln/p;
    y=originaln%p;
    fout<<cmmdc(x,y);





    return 0;
}
