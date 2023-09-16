#include <iostream>
#include <fstream>
#include <algorithm>
#include <climits>
#define MAXK 100
#define MAXIZ 20

using namespace std;
ifstream fin("popas.in");
ofstream fout("popas.out");

int indici[MAXK],izvoare[MAXK],distante[MAXK][MAXIZ+2];
int main()
{
    int k,t,u;
    fin>>k;
    for(int i=0;i<k;i++)
    {
        fin>>indici[i]>>izvoare[i];

        for(int j=1;j<=izvoare[i];j++)
            fin>>distante[i][j];
        sort(distante[i],distante[i]+izvoare[i]+1);
        distante[i][izvoare[i]+1]=distante[i][izvoare[i]]+1;
    }
    fin>>t;
    fin>>u;
//    for(int i=0;i<k;i++)
//    {
//        cout<<indici[i]<<" "<<izvoare[i]<<" ";
//        for(int j=0;j<=izvoare[i]+1;j++)
//            cout<<distante[i][j]<<" ";
//        cout<<endl;
//
//    }
    int minopriri=INT_MAX,indice=0;
    int p=t+u;
    for(int i=0;i<k;i++)
    {
        int nropriri=0,poz=0,urm=1;
        bool posibil=true;
        do
        {
            if(p<distante[i][urm]-distante[i][poz])
                posibil=false;
            else
            {
                while(p>=distante[i][urm]-distante[i][poz] && urm<=izvoare[i]+1)
                    urm++;
                if(urm<=izvoare[i]+1)
                {
                    nropriri++;
                    poz=urm-1;
                }

            }
        }
        while(posibil && urm<=izvoare[i]+1);
        if(posibil)
        {
            if(nropriri<=minopriri)
            {
                minopriri=nropriri;
                indice=indici[i];
            }
        }

    }

    if(indice)
        fout<<minopriri<<" "<<indice;
    else
        fout<<0;

    return 0;
}
