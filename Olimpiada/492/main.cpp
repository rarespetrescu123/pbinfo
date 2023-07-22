#include <iostream>

using namespace std;

int cmmdc(int a,int b)
{
    if (b==0)
        return a;
    return cmmdc(b,a%b);
}


int main()
{
    int n,v[200],i=0,j=0,c=0;

    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];

    i=0;
    j=n-1;
    while(i<j)
    {
        if(cmmdc(v[i],v[j])==1)
            c++;
        i++;
        j--;
    }

    cout<<c;

    return 0;
}
