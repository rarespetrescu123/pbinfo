#include <iostream>

using namespace std;
int v[100000];
int main()
{
    int n,a,poz=-1;
    cin>>n>>a;
    for(int i=0;i<n;i++)
        cin>>v[i];
    int stanga=1;
    int dreapta=30000;
    while(stanga<=dreapta)
    {
     int mijloc=(stanga+dreapta)/2;
     int s=0;
     for(int i=0;i<n;i++)
     {
      s+=v[i]/mijloc;
     }
     if(s<a)
        dreapta=mijloc-1;
     else
     {
         poz=mijloc;
         stanga=mijloc+1;
     }
    }
    cout<<poz;
    return 0;
}
