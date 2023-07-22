#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>

using namespace std;

ifstream fin("triang.in");
ofstream fout("triang.out");


struct punct
{
 long double x,y;
};
punct v[1500];

bool compara(punct a,punct b)
{
    return(a.x<b.x || fabs(b.x-a.x)<1e-3&& a.y<b.y);
}

int main()
{
    int n,contor=0;
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>v[i].x;
        fin>>v[i].y;
    }
    sort(v,v+n,compara);
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        {
            punct c;
            long double x1=v[i].x;
            long double x2=v[j].x;
            long double y1=v[i].y;
            long double y2=v[j].y;

            c.x=(x1 + x2 + sqrt(3)*(y1 - y2))/2;
            c.y=(y1 + y2 + sqrt(3)*(x2 - x1))/2;
            int left=j+1;
            int right=n-1;
            while(left<=right)
            {
                int mid=(left+right)/2;
                if(fabs(v[mid].x-c.x)<1e-3 && fabs(v[mid].y-c.y)<1e-3)
                {
                    contor++;
                    break;

                }
                else if(compara(c,v[mid]))
                    right=mid-1;
                else
                    left=mid+1;

            }
            c.x=(x1 + x2 - sqrt(3)*(y1 - y2))/2;
            c.y=(y1 + y2 - sqrt(3)*(x2 - x1))/2;
            left=j+1;
            right=n-1;
            while(left<=right)
            {
                int mid=(left+right)/2;
                if(fabs(v[mid].x-c.x)<1e-3 && fabs(v[mid].y-c.y)<1e-3)
                {
                    contor++;
                    break;

                }
                else if(compara(c,v[mid]))
                    right=mid-1;
                else
                    left=mid+1;

            }

        }
    fout<<contor;



    return 0;
}
