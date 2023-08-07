#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;
ifstream fin("anagrame.in");
ofstream fout("anagrame.out");

int main()
{
    string s;
    fin>>s;
    sort(s.begin(),s.end());
    do
    {
        fout<<s<<'\n';

    }while(next_permutation(s.begin(),s.end()));
    return 0;
}
