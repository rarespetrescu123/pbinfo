#include <iostream>
#include <fstream>
#define MAXN 100001
#define MAXC 10

using namespace std;
std::ifstream fin("balba.in");
std::ofstream fout("balba.out");

int v[MAXN];
int frv[MAXC];
int main(void)
{
    int c, n;
    fin >> c;
    if (c == 1)
    {
        fin >> n;
        for (int i = 0; i < n; i++)
            fin >> v[i];
        int p = 1, nr = 0, lg = 1;
        for (int i = 1; i < n; i++)
        {
            if (v[i] != v[i - 1])
                p++;
            else
                continue;
        }
        for (int i = 1; i < n; i++)
        {
            if (v[i] == v[i - 1])
                lg++;
            else
            {
                if (lg > 1)
                    nr++;
                lg = 1;
            }
        }
        if (lg > 1)
            nr++;
        fout << p << '\n';
        fout << nr;
    }
    if (c == 2)
    {
        fin >> n;
        for (int i = 0; i < n; i++)
        {
            fin >> v[i];
            frv[v[i]]++;
        }
        int cifpal = -1;
        for (int i = 0; i < MAXC; i++)
            if (frv[i] % 2 == 1 && frv[i] >= 3)
                cifpal = max(cifpal, i);
        if (cifpal == -1)
            for (int i = 0; i < MAXC; i++)
                if (frv[i] % 2 == 1)
                    cifpal = max(cifpal, i);
        if (frv[cifpal] > 1 && cifpal != 0)
        {
            for (int i = 9; i >= 0; i--)
            {
                if (frv[i] % 2 == 0)
                {
                    for (int j = 0; j < frv[i] / 2; j++)
                        fout << i;
                }
                else if (i == cifpal)
                    for (int j = 0; j < frv[cifpal] / 2 + 1; j++)
                        fout << i;
            }
            for (int i = 0; i <= MAXC; i++)
            {
                if (frv[i] % 2 == 0)
                {
                    for (int j = 0; j < frv[i] / 2; j++)
                        fout << i;
                }
                else if (i == cifpal)
                    for (int j = 0; j < frv[cifpal] / 2; j++)
                        fout << i;
            }
        }
        else if (frv[cifpal] > 1 && cifpal == 0)
        {
        }
    }
    return 0;
}