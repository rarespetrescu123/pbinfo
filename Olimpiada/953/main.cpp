#include <iostream>

using namespace std;


int main()
{
    long long int n,k,x,randcurent=1,nrdalegricurent=0,nrdalegrimax=0,randmax=1;
    cin>>n>>k;
    int nrdalemin=2*(n-1);
    for(int i=0;i<k;i++)
    {
        cin>>x;
        while(!((x>=randcurent*(randcurent-1)/2+1) && (x<=randcurent*(randcurent+1)/2)))
        {
            if(nrdalegricurent>nrdalegrimax)
            {
                randmax=randcurent;
                nrdalegrimax=nrdalegricurent;
            }
            randcurent++;
            nrdalegricurent=0;

        }
        nrdalegricurent++;

    }
    if(nrdalegricurent>nrdalegrimax)
        {
            randmax=randcurent;
            nrdalegrimax=nrdalegricurent;
        }


    cout<<randmax<<endl;
    cout<<nrdalemin;


    return 0;
}
