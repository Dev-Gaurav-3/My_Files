#include<iostream>
using namespace std;

int main(){

    int x = 121;

    if(x<0) return 0;

    string y = to_string(x);

    int i = 0;
    int j = y.size()-1;

    bool flag = false;

    while (i<j)
    {
        if(y[i] == y[j]){
            flag = true;
            i++;
            j--;

            continue;
        }

        else{
            flag = false;
            return 0;

        }
    }   

    cout<<flag;    

    return 0;
}
