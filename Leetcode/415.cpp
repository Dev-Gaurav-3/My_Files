#include<iostream>
using namespace std;

int main(){

    string num1 = "11";
    string num2 = "123";

    int n = 0;
        int m = 0;
        for(int i = 0;i<num1.size();i++){
            n *= 10;
            n += int(num1[i] - '0');
        }
        for(int i = 0;i<num2.size();i++){
            m *= 10;
            m += int(num2[i] - '0');
        }

        
    

    return 0;
}
