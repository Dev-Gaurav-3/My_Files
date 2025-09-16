#include<iostream>
using namespace std;

int main(){

    string n;
    cout<<"Enter n: ";
    cin>>n;

    string ans ="";

    char ch = ' ';

    for (int i = 0; i < n.size(); i++)
    {
        if(n[i] == '1'){
            ch = 'I';
        }
        else if(n[i] == '2'){
            ch = 'II';
        }if(n[i] == '3'){
            ch = 'III';
        }if(n[i] == '4'){
            ch = 'IV';
        }if(n[i] == '5'){
            ch = 'V';
        }if(n[i] == '6'){
            ch = 'VI';
        }if(n[i] == '7'){
            ch = 'VII';
        }if(n[i] == '8'){
            ch = 'VIII';
        }
        if(n[i] == '9'){
            ch = 'IX';
        }
    }

    

    

    return 0;
}