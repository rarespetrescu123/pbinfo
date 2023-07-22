#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int p=1;
    for(int i=3;i<=2*n-1;i+=2)
        p*=i;
    cout<<p;



    return 0;
}
