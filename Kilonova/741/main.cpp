#include <iostream>
#include <fstream>
#include <climits>
#include <cmath>

#define MAXNR 50

using namespace std;
ifstream fin("ocr.in");
ofstream fout("ocr.out");


float lini[MAXNR],coloane[MAXNR],v[MAXNR][MAXNR];
int main()
{
    int n,m,pozlinie=-1,pozcoloane=-1;
    float minlinie=51,mincoloane=51;
    fin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            fin>>v[i][j];
            lini[i]+=v[i][j];
            coloane[j]+=v[i][j];
        }
    for(int i=1;i<n;i++)
        lini[i]+=lini[i-1];
    for(int i=1;i<m;i++)
        coloane[i]+=coloane[i-1];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            float vallinie=0,valcoloane=0;
            if(i==0)
                vallinie=abs(lini[n-1]-lini[i]);
            else
                vallinie=abs(lini[i-1]-(lini[n-1]-lini[i]));
            if(j==0)
                valcoloane=abs(coloane[m-1]-coloane[j]);
            else
                valcoloane=abs(coloane[j-1]-(coloane[m-1]-coloane[j]));
            if(vallinie<=minlinie && valcoloane<=mincoloane)
            {
                minlinie=vallinie;
                mincoloane=valcoloane;
                pozlinie=i;
                pozcoloane=j;
            }
        }
    fout<<pozlinie+1<<" "<<pozcoloane+1;




    return 0;
}
