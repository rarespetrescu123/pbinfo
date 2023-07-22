#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("triviador.in");
ofstream fout("triviador.out");

int main()
{
    int n,a,b,c,max1=0,max2=0,s;
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>a>>b>>c;
        s=a+b+c;
        if(s>max1)
        {
            max2=max1;
            max1=s;
        }
        else if(s>max2 && s!=max1)
            max2=s;


    }
    if(max2==0)
        fout<<"TOTI SUNT CASTIGATORI";
    else
        fout<<max1<<" "<<max2;




    return 0;
}
