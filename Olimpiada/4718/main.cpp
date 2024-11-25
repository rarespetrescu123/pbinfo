#include <iostream>


using namespace std;

int main(void)
{
    int l,c;
    cin>>l>>c;
    int s=(l-1)*l/2+c;
    if(s%9==0)
        cout<<9;
    else
        cout<<s%9;
}