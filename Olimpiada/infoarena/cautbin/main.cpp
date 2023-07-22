#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("cautbin.in");
ofstream fout("cautbin.out");
int v[100000],n;



int cautbin0(int x)
{
    int poz=-1;
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(x>=v[mid])
        {
           left=mid+1;
           if(x==v[mid])
                poz=mid;
        }

        else
            right=mid-1;


    }
    return poz;
}



int cautbin1(int x)
{
    int poz=-1;
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(x>=v[mid])
        {
           left=mid+1;
           poz=mid;
        }

        else
            right=mid-1;


    }
    return poz;
}


int cautbin2(int x)
{
    int poz=-1;
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(x<=v[mid])
        {
           poz=mid;
           right=mid-1;
        }

        else
            left=mid+1;


    }
    return poz;
}



int main()
{
    int m,c,x;
    fin>>n;
    for(int i=0;i<n;i++)
        fin>>v[i];
    fin>>m;
    for(int i=0;i<m;i++)
    {
        fin>>c;
        fin>>x;
        if(c==0)
        {
            int poz=cautbin0(x);
            if(poz==-1)
                fout<<-1<<'\n';
            else
                fout<<poz+1<<'\n';
        }
        else if(c==1)
            fout<<cautbin1(x)+1<<'\n';
        else
            fout<<cautbin2(x)+1<<'\n';


    }

    return 0;
}
