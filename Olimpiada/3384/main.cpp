#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("codjoc.in");
ofstream fout("codjoc.out");



    long long n , sum;
    int nrcif(int n)
{
    int c = 0;
    while(n != 0) c++ , n /= 10;
    return c;
}
int main()
{
    fin >> n;
    sum += n;
    long long p = nrcif(n) , pp = 1;
    while(p > 0)
    {
        sum += n % pp;
        pp *= 10;
        p--;
    }
    fout << sum;

    return 0;
}
