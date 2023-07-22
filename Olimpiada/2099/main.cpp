#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("unupatru.in");
ofstream fout("unupatru.out");

int main()
{
    long long int n,c=0,s=0,x;

    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>x;
        c=0;
        while(x!=1 && x!=4)
        {
            s=0;
            c++;
            while(x)
            {
                int r=x%10;
                s+=r*r;
                x/=10;
            }
            x=s;
        }
        fout<<c<<" ";
    }

    return 0;
}
