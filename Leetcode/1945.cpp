#include<iostream>
using namespace std;


int main(){

    string str = "rcnyobzyozawsffjnpvmtjlyxxtoxqtaaubhjxtwlvv";
    int k =7;
        string a ="";
        for (int i = 0; i <str.length(); i++)
    {
        char ch = str[i];
        a += to_string(int(char(ch-'a'+1)));
    }

    int b = 0;

    for (int i = 0; i < a.length(); i++)
    {
        char ch1  = a[i];
        b += int(char(ch1-'1'+1));
    }
    if(k==1) cout<<b;
    int c=0;
    if (k>=2)
    {
        if(k==2){
            while(b>0){
            c += b%10;
            b /= 10;
        } 
        cout<<c;
        }
        int d = 0;

        if(k==3){
            while(b>0){
                c += b%10;
                b /= 10;
            }
            while (c>0)
            {
                d += c%10;
                c /= 10;                
            }
            cout<<d;
        }
        int e =0;
        if(k>=4){
            while(b>0){
                c += b%10;
                b /= 10;
            }
            while (c>0)
            {
                d += c%10;
                c /= 10;                
            }
            while (d>0)
            {
                e += d%10;
                d /= 10;                
            }
            cout<<e;

        }

    }
    return 0;
}