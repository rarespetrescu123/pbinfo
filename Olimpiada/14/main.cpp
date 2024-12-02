#include <iostream>

using namespace std;
int prim(long long int x)
{
    if(x==1)
        return 0;
    else if(x==2)
        return 1;
    else if(x%2==0)
        return 0;
    else
        for(int i=3;i*i<=x;i+=2)
            if(x%i==0)
                return 0;
    return 1;
}