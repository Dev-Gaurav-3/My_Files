#include<iostream>
using namespace std;

int main(){
    int low = 1;
    int high = 100;
    int ans = 0;
    for (int i = low; i <= high; i++)
    {
        string str = to_string(i);
        if(str.size()%2 == 0){
            int n = str.size()/2;
            int sum1 = 0;
            int sum2 = 0;
            int j = 0;
            while(j != n){
                sum1 += int(str[j]-'0');
                sum2 += int(str[str.size()-j-1]-'0');
                j++; 
            }
            if(sum1 == sum2) ans++;
        }
        else{
            continue;
        }
    }
    cout<<ans;
    

    return 0;
}
