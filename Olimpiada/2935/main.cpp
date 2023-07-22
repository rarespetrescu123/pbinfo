#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("robot5.in");
ofstream fout("robot5.out");

int nrpasi(int n,int w,int p,int x)
{
 if(w<p-1)
        return w;
 if(p-1>=x)
    return w+x;
 if(p-1<x && w<=n-1)
    return p-1+w;
 if(p-1<x && w>=n && w>=p-1)
    return p-1+((x-(p-1))/n+1)*n+w-n+(x-(p-1))%n;



}

int main()
{
    int n,w,p,x,c;
    fin>>c;
    if(c==1)
    {
        fin>>n>>w>>x>>p;
        fout<<nrpasi(n,w,p,x);


    }
    else
    {
        int maxnrpasi=0,pozmaxnrpasi=0;
        fin>>n>>w>>x;
        for(int i=1;i<=n;i++)
        {
         int pasi=nrpasi(n,w,i,x);
         if(pasi>maxnrpasi)
         {
          maxnrpasi=pasi;
          pozmaxnrpasi=i;
         }

        }
        fout<<maxnrpasi<<" "<<pozmaxnrpasi;


    }

    return 0;
}
