#include <iostream>
#include <fstream>


using namespace std;
ifstream fin("grea.in");
ofstream fout("grea.out");

int main()
{
    int t,a;
    fin>>t;
    for(int i=0;i<t;i++)
    {
        fin>>a;
        int s=0;
        while(a%2==0)
        {
            s++;
            a/=2;
        }
        int d=3;
        while(a>1)
        {
            while(a%d==0)
            {
                s++;
                a/=d;
            }
            d+=2;
            if(d*d>a && a>1)
                d=a;
        }
        fout<<s<<'\n';




    }





    return 0;
}
