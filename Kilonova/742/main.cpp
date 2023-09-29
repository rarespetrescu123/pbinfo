#include <iostream>
#include <fstream>
#define MAXN 51
#define MAXM 51

using namespace std;
ifstream fin("tabel.in");
ofstream fout("tabel.out");

int v[MAXN][MAXM],matrice[MAXN][MAXM],lipsaline[MAXN],lipsacolon[MAXM];
int main()
{
    int n,m,p,line,colon,val,valdegasit;

    fin>>n>>m;
    fin>>p;
    for(int i=1;i<=n;i++)
        lipsaline[i]=m;
    for(int j=1;j<=m;j++)
        lipsacolon[j]=n;
    valdegasit=n*m-p;
    for(int i=1;i<=p;i++)
        {
            fin>>line>>colon>>val;
            matrice[line][colon]=val;
            v[line][colon]=1;
            lipsaline[line]--;
            lipsacolon[colon]--;
        }

    while(valdegasit)
    {
        for(int i=1;i<=n;i++)
            if(lipsaline[i]==1)
            {
                for(int j=1;j<=m;j++)
                    if(v[i][j]==0)
                    {
                        if(j==m)
                        {
                            int s=0;
                            for(int k=1;k<m;k++)
                                s+=matrice[i][k];
                            matrice[i][j]=s;
                        }
                        else
                        {
                            int dif=0;
                            for(int k=1;k<m;k++)
                                dif+=matrice[i][k];
                            matrice[i][j]=matrice[i][m]-dif;
                        }
                        v[i][j]=1;
                        lipsaline[i]--;
                        lipsacolon[j]--;
                        valdegasit--;
                    }
            }


        for(int j=1;j<=m;j++)
            if(lipsacolon[j]==1)
            {
                for(int i=1;i<=n;i++)
                    if(v[i][j]==0)
                    {
                        if(i==n)
                        {
                            int s=0;
                            for(int k=1;k<n;k++)
                                s+=matrice[k][j];
                            matrice[i][j]=s;
                        }
                        else
                        {
                            int dif=0;
                            for(int k=1;k<n;k++)
                                dif+=matrice[k][j];
                            matrice[i][j]=matrice[n][j]-dif;
                        }
                        v[i][j]=1;
                        lipsaline[i]--;
                        lipsacolon[j]--;
                        valdegasit--;
                    }
            }


    }
    for(int i=1;i<=n;i++,fout<<endl)
        for(int j=1;j<=m;j++)
            fout<<matrice[i][j]<<" ";

    return 0;
}
