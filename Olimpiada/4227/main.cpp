#include <iostream>

using namespace std;

int main()
{
    int a,b;
    bool trecere=false;

    cin>>a>>b;

    while(a>0 && b>0)
    {
        if(a%10+b%10>9)
            {
                trecere=true;
                break;
            }
        else
           {
               a/=10;
               b/=10;
           }
    }
    if(trecere)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
