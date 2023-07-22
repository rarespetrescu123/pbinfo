#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int spext=n-1;
    int spint=n;
    for(int j=1;j<=n-1;j++)
    {
        for(int i=0;i<spext;i++)
            cout<<"#";
        for(int i=0;i<spint;i++)
            cout<<"*";
        for(int i=0;i<spext;i++)
            cout<<"#";
        spext--;
        spint+=2;
        cout<<'\n';
    }


    for(int j=0;j<n;j++)
    {
        for(int i=0;i<3*n-2;i++)
            cout<<"*";
        cout<<'\n';
    }




    int outer_space=1;
    int inner_space=3*n-4;
    for(int j=0;j<n-1;j++)
    {
        for(int i=0;i<outer_space;i++)
            cout<<"#";
        for(int i=0;i<inner_space;i++)
            cout<<"*";
        for(int i=0;i<outer_space;i++)
            cout<<"#";
        outer_space++;
        inner_space-=2;
        cout<<'\n';
    }






    return 0;
}
