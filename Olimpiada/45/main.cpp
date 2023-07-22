#include <iostream>

using namespace std;

int main()
{
    int n;

    cin>>n;

    if(n==1)
        cout<<"NU";
    else if(n==2)
        cout<<"DA";
    else
        for(int i=3;i*i<n;i+=2)
            {
                if(n%i==0)
                    cout<<"NU";
                else
                    cout<<"DA";
            }


    return 0;
}
