#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("nrtri.in");
ofstream fout("nrtri.out");

int v[800];

int main()
{
    int n,cnt=0;
    fin>>n;
    for(int i=0;i<n;i++)
        fin>>v[i];
    sort(v,v+n);
// brute force
//    for(int i=0;i<n;i++)
//        for(int j=i+1;j<n;j++)
//            for(int k=j+1;k<n;k++)
//                if(v[i]+v[j]>=v[k] && v[k]+v[j]>=v[i] && v[i]+v[k]>=v[j])
//                    cnt++;


// cautare binara
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        {
            int left=0;
            int right=n-1;
            int poz=-1;
            while(left<=right)
            {
                int mid=(left+right)/2;
                if(v[mid]<=v[i]+v[j])
                    left=mid+1,poz=mid;
                else
                    right=mid-1;

            }
            cnt+=(poz-j);
        }

    fout<<cnt;


    return 0;
}
