#include <iostream>

using namespace std;
int UCP(long long int x)
{
    if(x==0)
        return 0;
    else
    {
        while(x>0)
        {
            if((x%10)%2==0)
            {
                return x%10;
                break;
            }
            else
            {
                x/=10;
            }
        }
    }
    return -1;

}