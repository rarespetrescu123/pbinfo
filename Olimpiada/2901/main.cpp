#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("datapal.in");
ofstream fout("datapal.out");

char d[8];
int secole[100];

int main()
{
    int n,c=0,maxsecole=0;
    fin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<8;j++)
            fin>>d[j];
        bool palindrom=true;
        int stanga=0,dreapta=7;
        while(stanga<dreapta)
            if(d[stanga]!=d[dreapta])
            {
                palindrom=false;
                break;
            }
            else
                {
                    dreapta--;
                    stanga++;
                }
        if(palindrom)
        {
            c++;
            int secol=(d[4]-'0')*10+d[5]-'0';
            secole[secol]++;
            maxsecole=max(maxsecole,secole[secol]);

        }

    }
    fout<<c<<'\n';
    for(int i=0;i<100;i++)
        if(secole[i]==maxsecole)
            fout<<i+1<<" ";



    return 0;
}
