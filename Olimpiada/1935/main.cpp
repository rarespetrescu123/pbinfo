#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("plimbare.in");
ofstream fout("plimbare.out");
int main()
{
    int n,x,i,c=0;

    fin>>n;
    for(i=0;i<n;i++)
        {
            fin>>x;
            int originalx=x;
            int r=0;
            while(x)
                {
                    r*=10;
                    r+=x%10;
                    x/=10;
                }
            if(originalx==r)
                c++;

        }
    fout<<c;

    return 0;
}
