#include <iostream>

using namespace std;
int nr_cif_zero(long long int x)
{
    if(x==0)
        return 1;
    else
    {
        int s=0;
        while(x>0)
        {
            if(x%10==0)
                s++;
            x/=10;
        }
        return s;
    }

}