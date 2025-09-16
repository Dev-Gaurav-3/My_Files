#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>salary = {4000,3000,2000,1000};
    int max = salary[0];
    int min = salary[0];
    int total = 0;
        for(int ele:salary){
            if(ele<min) min = ele;
            if(ele>max) max = ele;
            total += ele;
        }
        total = total-min-max;
        int n = salary.size()-2;

        cout<<total/n;

    return 0;
}
