#include <iostream>
#include <fstream>


using namespace std;
ifstream fin("benzinarii.in");
ofstream fout("benzinarii.out");
bool palindrom(int n)
{
    int originaln=n,s=0;
    while(n>0)
    {
        s*=10;
        s+=n%10;
        n/=10;
    }
    return s==originaln;
}

int main()
{
    int n,pmic,pmare;
    fin>>n;
    pmic=n-1;
    pmare=n+1;
    while(!palindrom(pmic))
        pmic--;

    while(!palindrom(pmare))
        pmare++;

    if(n-pmic>=pmare-n)
        fout<<pmare-n<<" "<<pmare;
    else
        fout<<n-pmic<<" "<<2*n-pmic;


    return 0;
}
