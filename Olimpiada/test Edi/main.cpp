#include <iostream>

using namespace std;

int main(void)
{
    int a,b,i;
    int numar=0;

    std::cout<<"cate numere doresti?"<<"\n";
    std::cin>>a;

    i=0;

    while(i<a)
    {
        std::cin>>b;
        i++;
        if(b<0)
            numar++;
    }
    std::cout<<"ai "<<numar<<" numere negative";
}