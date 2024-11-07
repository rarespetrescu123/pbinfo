#include <iostream>
#include <fstream>
#include <vector>
#define MAXN 1000000

using namespace std;
std::ifstream fin("oneout.in");
std::ofstream fout("oneout.out");
// bitset<MAXN> ciur;
int ciur[MAXN], v[MAXN];
vector<pair<int, int>> bisecvente;
int main(void)
{
    ciur[0] = 1;
    ciur[1] = 0;
    for (int i = 2; i * i < MAXN; i++)
        if (ciur[i] == 0)
            for (int j = i * i; j < MAXN; j += i * i)
                ciur[j] = 1;
    int c;
    fin >> c;
    if (c == 1)
    {
        int n, x, nr = 0;
        fin >> n;
        for (int i = 0; i < n; i++)
        {
            fin >> x;
            if (ciur[x] == 0)
                nr++;
        }
        fout << nr;
    }
    else if (c == 2)
    {
        int n;
        fin >> n;
        for (int i = 0; i < n; i++)
            fin >> v[i];
        int poz = 1, maxlg = 0;
        while (poz < n - 1)
        {
            if (ciur[v[poz]] == 0)
            {
                poz++;
            }
            else
            {
                int stanga = poz - 1, dreapta = poz + 1;
                while (ciur[v[stanga]] == 0 && stanga >= 0)
                    stanga--;
                stanga++;
                while (ciur[v[dreapta]] == 0 && dreapta < n)
                    dreapta++;
                dreapta--;
                if (poz != stanga && poz != dreapta)
                {
                    int lungime = dreapta - stanga;
                    if (lungime > maxlg)
                    {
                        maxlg = lungime;
                        bisecvente.clear();
                        bisecvente.push_back(make_pair(stanga + 1, dreapta + 1));
                    }
                    else if (lungime == maxlg)
                        bisecvente.push_back(make_pair(stanga + 1, dreapta + 1));
                }
                poz = dreapta + 1;
            }
        }
        if (bisecvente.size() == 0)
            fout << -1;
        else
        {
            fout << maxlg << ' ' << bisecvente.size() << '\n';
            for (int i = 0; i < bisecvente.size(); i++)
                fout << bisecvente[i].first << ' ' << bisecvente[i].second << '\n';
        }
    }
    return 0;
}
