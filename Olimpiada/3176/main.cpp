#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("fibo0.in");
ofstream fout("fibo0.out");

int main()
{
    int a,b,contor=0;

//    while(true)
//    {
//        fin>>a;
//        if(fin.eof())
//            break;
//        fin>>b;
//        if(b%a==0)
//            contor++;
//    }
    while(fin>>a>>b)
    {
        if(b%a==0)
            contor++;
    }
    fout<<contor;



    return 0;
}
