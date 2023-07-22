#include <iostream>

using namespace std;

int main()
{
    int n;
    long long int p;
    cin>>n>>p;
    cout<<1<<" ";
    int originaln=n;
    while(p>n)
    {
        cout<<n<<" ";
        n*=originaln;
    }
    return 0;
}
