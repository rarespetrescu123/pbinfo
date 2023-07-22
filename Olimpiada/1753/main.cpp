#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("concurs2.in");
ofstream fout("concurs2.out");

int main()
{
    int c,n,s,p1,p2,elevi1=0,elevi2=0,maxpuncte1=0,maxpuncte2=0,nrmax1=0,nrmax2=0;
    fin>>c;
    fin>>n;
    bool totitrecuti=true;
    for(int i=0;i<n;i++)
    {
        fin>>s>>p1>>p2;
        if(p1==0 || p2==0)
            totitrecuti=false;
        int punctaj=p1+p2;
        if(s==1)
        {
            elevi1++;
            if(punctaj>maxpuncte1)
            {
                maxpuncte1=punctaj;
                nrmax1=1;
            }
            else if(punctaj==maxpuncte1)
                nrmax1++;

        }
        else
        {
            elevi2++;
            if(punctaj>maxpuncte2)
            {
                maxpuncte2=punctaj;
                nrmax2=1;
            }
            else if(punctaj==maxpuncte2)
                nrmax2++;
        }

    }
    if(c==1)
    {
        if(totitrecuti)
            fout<<"DA";
        else
            fout<<"NU";
    }
    else if(c==2)
    {
        fout<<1<<" "<<elevi1<<'\n';
        fout<<2<<" "<<elevi2<<'\n';
    }
    else
    {
        fout<<1<<" "<<maxpuncte1<<" "<<nrmax1<<'\n';
        fout<<2<<" "<<maxpuncte2<<" "<<nrmax2<<'\n';
        fout<<nrmax1+nrmax2;
    }
    return 0;
}
