#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("control.in");
ofstream fout("control.out");
int main()
{
    int n,i,v[101],g[201]={0},c=0,j=0,z[3],cif;

    fin>>n;
    for(i=0;i<n;i++)
    {
        fin>>v[i];
        g[v[i]]++;
    }
    i=0;
    j=0;
    while(i<=200)
    {
        if (g[i]==0)
            i++;
        else
        {
            z[j]=g[i];
            j++;
            if(j==3)
            {
                if((z[0]%2==0&&z[1]%2==0&&z[2]%2==0)||(z[0]%2==1&&z[1]%2==1&&z[2]%2==1))
                    cif=1;
                else
                    cif=0;
                j=0;
                if(cif==1)
                    c+=10;
                else
                    c+=1;
            }
        i++;
        }

    }
    fout<<c<<'\n';
    int prim = 1;
    if(c<=1)
        prim = 0;
    else if (c==2)
        prim = 1;
    else if (c%2==0)
        prim = 0;
    else
        for(i=3;i*i<=c;i+=2)
            if(c%i==0)
            {
               prim = 0;
               break;
            }
    fout<<prim;








    return 0;
}
