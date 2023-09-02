#include <iostream>
#include <fstream>
#include <stack>

using namespace std;
ifstream fin("paranteze.in");
ofstream fout("paranteze.out");

int main()
{
    int n,lung,x;
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>lung;
        stack<int> stiva;
        bool corect=true;
        for(int i=0;i<lung;i++)
        {
            fin>>x;
            if(x==0 || x==2)
                stiva.push(x);
            else if(x==1)
            {
                if(stiva.empty()|| stiva.top()!=0)
                    corect=false;
                else
                    stiva.pop();

            }
            else if(x==3)
            {
                if(stiva.empty()|| stiva.top()!=2)
                    corect=false;
                else
                    stiva.pop();

            }

        }
        if(!corect || !stiva.empty())
            fout<<"Nu"<<'\n';
        else
            fout<<"Da"<<'\n';
    }

    return 0;
}
