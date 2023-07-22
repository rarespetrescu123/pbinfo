#include <iostream>

using namespace std;

int main()
{
    int n;

    cin>>n;

    int spatii=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<spatii;j++)
            cout<<" ";
        for(int i=0;i<n;i++)
            cout<<"*";
        cout<<'\n';
        spatii++;
    }
    spatii--;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<spatii;j++)
            cout<<" ";
        for(int i=0;i<n;i++)
            cout<<"*";
        cout<<'\n';
        spatii--;
    }
    return 0;
}
