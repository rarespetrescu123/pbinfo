#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("concurs.in");
ofstream fout("concurs.out");

int main()
{
    int n,c,contormaxim=0,nrelevimaxim=0;
    long long int a,b;
    fin>>c;
    fin>>n;
    if(c==1)
    {
        for(int i=0;i<n;i++)
        {
            fin>>a>>b;
            int puncte=0;


            while(b)
            {
                if(b%10!=0)
                    puncte+=b%10;
                else
                    puncte+=9;
                b/=10;
            }

            if(puncte>contormaxim)
            {
                contormaxim=puncte;
                nrelevimaxim=1;
            }
            else if(puncte==contormaxim)
                nrelevimaxim++;


        }
        fout<<contormaxim<<" "<<nrelevimaxim;

    }
    else
    {
        int punctaj1=0,punctaj2=0,punctaj3=0;
        for(int i=0;i<n;i++)
        {
            fin>>a>>b;
            int puncte=0;
            while(b)
            {
                if(b%10!=0)
                    puncte+=b%10;
                else
                    puncte+=9;
                b/=10;
            }
            if(a==1)
                punctaj1+=puncte;
            else if(a==2)
                punctaj2+=puncte;
            else
                punctaj3+=puncte;
        }
        int maxim=max(max(punctaj1,punctaj2),punctaj3);
        if(maxim==0)
            fout<<"FARA CAMPION";
        else
        {
            if(maxim==punctaj1)
                fout<<1<<" ";
            if(maxim==punctaj2)
                fout<<2<<" ";
            if(maxim==punctaj3)
                fout<<3<<" ";
            fout<<maxim;
        }
    }

    return 0;
}
