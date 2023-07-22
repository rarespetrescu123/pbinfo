#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
ifstream fin("baza.in");
ofstream fout("baza.out");
int v[150],p[150];
char w[51];
void inmulteste(int c[],int val)
{
    int carry=0;
    for(int i=1;i<=c[0]|| carry>0;i++)
    {
        c[i]=(c[i]*val)+carry;
        carry=c[i]/10;
        c[i]=c[i]%10;
        c[0]=max(c[0],i);
    }

}
void adunare(int c[],int val)
{
    int deadunat[150];
    for(int i=0;i<150;i++)
        deadunat[i]=p[i];
    inmulteste(deadunat,val);
    while(deadunat[0]>1 && deadunat[deadunat[0]]==0)
        deadunat[0]--;
    int carry=0,i=1;
    while(i<=c[0]||i<=deadunat[0] || carry>0)
    {
        c[i]=c[i]+deadunat[i]+carry;
        carry=c[i]/10;
        c[i]=c[i]%10;
        c[0]=max(c[0],i);
        i++;
    }

}
int main()
{
    fin>>w;
    p[0]=1;
    p[1]=1;
    int lc=strlen(w);
    for(int i=lc-1;i>=0;i--)
    {
        adunare(v,w[i]-'a');
        inmulteste(p,26);
    }
    for(int i=v[0];i>0;i--)
        fout<<v[i];



    return 0;
}
