#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("inima.in");
ofstream fout("inima.out");
int v[100000];
int main()
{
    int n,maxprodus=0;
    fin>>n;
    for(int i=0;i<n;i++)
        fin>>v[i];

//    50 de puncte
//    for(int i=0;i<n;i++)
//        for(int j=i+1;j<n;j++)
//            if(min(v[i],v[j])*(j-i)>maxprodus)
//                maxprodus=min(v[i],v[j])*(j-i);
    int stanga=0,dreapta=n-1;
    while(stanga<dreapta)
    {
        int arie=min(v[stanga],v[dreapta])*(dreapta-stanga);
        maxprodus=max(maxprodus,arie);
        if(v[stanga]<v[dreapta])
            stanga++;
        else
            dreapta--;
    }

    fout<<maxprodus;


    return 0;
}
