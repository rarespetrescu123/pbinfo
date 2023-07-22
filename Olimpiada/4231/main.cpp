#include <iostream>

using namespace std;

int main()
{
    long long int n,x,minima;

    cin>>n>>x;

    minima=10;
    while(n)
    {
     if(x<n%10 && n%10<minima)
        minima=n%10;
     n/=10;

    }
    if(minima==10)
        cout<<-1;
    else
        cout<<minima;



    return 0;
}
