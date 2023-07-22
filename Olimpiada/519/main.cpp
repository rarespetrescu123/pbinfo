#include <iostream>

using namespace std;
int x[1000],y[1000];
int main()
{
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i];
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>y[i];

    int pozin=0;
    bool gasit=false;
    for(int i=0;i<n-m+1;i++)
    {
        bool ok=true;
        for(int j=0;j<m;j++)
            if(x[i+j]!=y[j])
            {
                ok=false;
                break;
            }
        if(ok)
        {
            gasit=true;
            pozin=i;
            cout<<pozin+1;
            break;
        }
    }
    if(!gasit)
        cout<<"NU";



    return 0;
}
