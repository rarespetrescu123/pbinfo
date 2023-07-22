#include <iostream>

using namespace std;
int v[20];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int a=0;a<v[i];a++)
            {
                for(int b=0;b<v[i];b++)
                    cout<<(a+b)%v[i]<<" ";
                cout<<'\n';
            }


        }
        else
        {
            for(int a=0;a<v[i];a++)
            {
                for(int b=0;b<v[i];b++)
                    cout<<(a*b)%v[i]<<" ";
                cout<<'\n';
            }
        }
    }
    return 0;
}
