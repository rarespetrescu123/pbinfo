#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("joc8.in");
ofstream fout("joc8.out");

bool alternant(int x)
{
    int v[10],c=0;
    while(x)
    {
     v[c]=x%10;
     c++;
     x/=10;
    }
    if(c%2==1)
    {
        for(int i=1;i<c-1;i++)
        {
            if(!((v[i]<v[i+1]&&v[i]<v[i-1])||(v[i]>v[i+1] &&v[i]>v[i-1])))
                return false;

        }
    }
    else
        return false;

    return true;


}

int main()
{
    int n,x,c=0;

    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>x;
        if(alternant(x))
            c++;
    }
    fout<<c;
    return 0;
}
