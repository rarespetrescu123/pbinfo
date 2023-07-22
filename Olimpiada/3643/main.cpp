#include <iostream>
#include <vector>

using namespace std;

int determinaValoare(int v)
{
    int k=1,contor=0;
    while(true)
    {
        contor+=(k+(k+1)/2);
        if(contor>=v)
            break;
        k++;
    }
    contor-=(k+(k+1)/2);
    v-=contor;
    if(v<=k)
        return v;
    v-=k;
    return 2*v-1;

}


int determinaPozitie(int v)
{
    int s=0;
    for(int k=1;k<=v-1;k++)
    {
        s+=(k+(k+1)/2);
    }
    return s+v;
}

int main()
{
    int c,v;
    cin>>c;
    cin>>v;
    if(c==1)
    {
        cout<<determinaValoare(v);
    }
    if(c==2)
    {
        cout<<determinaPozitie(v);
    }
    return 0;
}
