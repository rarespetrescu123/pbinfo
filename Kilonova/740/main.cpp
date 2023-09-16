#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
ifstream fin("sir.in");
ofstream fout("sir.out");

bool prezent[100];

bool lexicographic(int a, int b)
{
    return to_string(a)<to_string(b);
}

int main()
{
    vector<int> v;
    int k;
    fin>>k;
    while(true)
    {
        k=(k*k/10)%100;
        if(prezent[k])
            break;
        prezent[k]=true;
        v.push_back(k);
    }
    for(auto i: v)
        fout<<i<<" ";
    sort(v.begin(),v.end(),lexicographic);
    fout<<endl;
    for(auto i:v)
        fout<<i<<" ";

    return 0;
}
