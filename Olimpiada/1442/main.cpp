#include <iostream>

using namespace std;
int sum_cifra_control(long long int a,long long int b)
{
    long long int s=0,originala=a;
    for(int i=a;i<=b;i++)
    {
        if(i%9==a)
            s++;
        else if(a==9 && i%9==0)
            s++;
    }
    return s;
}