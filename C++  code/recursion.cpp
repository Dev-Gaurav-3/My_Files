#include<iostream>
#include<vector>
using namespace std;

// SYNTAX 
// datatype methodname(n parameters){

//     if(halt condition){
//         return result;
//     }

//     return methodname(n parameters)

// }
// Given an integer ,find out the sum of its digits

int sum(int n){
    if (n>=0 && n<=9)
    {
        return n;
    }

    int ans = 0;

    ans += (n%10)+sum(n/10);

    return ans;

    
    
}


int main(){
    // int n;
    // cin>>n;
    cout<<sum(849);
               
    return 0 ;
}
// FIND P TO THE POWER Q USING RECURSION

// int pow(int p,int q){
//     if(q == 0){
//         return 1;
//     }

//     int ans = 1;
//     ans = p *pow(p,q-1);
// }

// int main(){

//     // int p,q;
//     // cin>>p>>q;

//     cout<<pow(2,3);


//     return 0;
// }

// PRINT THE MAX VALUE OF AN ARRAY USING RECURSION

// int Max_Ele(int *arr,int idx,int n){

//     if(idx == n-1){
//         return arr[idx];
//     }

//     return max(arr[idx] , Max_Ele(arr,idx+1,n));

// }

// int main(){

//     int n = 5;
//     int arr[] = {13,10,3,2,5};

//     cout<<Max_Ele(arr,0,n);

//     return 0;
// }
// FIND THE SUM OF THE VALUES OF THE ARRAY

// int sum(int *arr,int idx,int n){

//     if(idx == n-1){
//         return arr[idx];
//     }
//     return arr[idx]+sum(arr,idx+1,n);


// }

// int main(){
//     int arr[] = {6,3,5,20,1};
//     int n= 5;

//     cout<<sum(arr,0,n);

//     return 0;
// }

// REMOVE ALL THE OCCURRENCE OF a FROM "abcax" using recursion

// string remove_str(string s,int idx,int n){
//     if (idx == n)
//     {
//         return "";
//     }

//     string curr = "";
//     curr += s[idx];
//     return ((s[idx] == 'a') ? "" : curr) + remove_str(s,idx+1,n);
    
// }

// int main(){
//     string s = "abcaxad";
//     int n = 7;
//     cout<<remove_str(s,0,n);
    
//     return 0;
// }

// CHECK Whether the given no. is palindrome or not like 12621 , 84548..

// bool f(int num,int *temp){
//     if(num >=0 and num<=9){
//         int last_dig_of_temp = (*temp)%10;
//         (*temp) /= 10;
//         return (num = (last_dig_of_temp)%10);
//     }
//     bool result = f(num/10 , temp) and num%10 == ((*temp)%10);
//     (*temp) /= 10;
//     return result;
// }

// int main(){
//     int num = 12621;
//     int another_num = num;
//     int *temp = &another_num;

//     cout<<f(num,temp);

//     return 0;
// }

// GIVEN A NUMBER N ,FIND THE INCREASING SEQUENCE FROM 1 TO N WITHOUT USING LOOP

// int sequence(int strt,int n){
//     if(strt == n){
//         return n;
//     }

//     cout<<strt<<" ";
//     return sequence(strt+1,n);

// }

// int main(){

//     cout<<sequence(1,5);

//     return 0;
// }


//  GIVEN A NUMBER NUM AND A VALUE K PRINT K MULTIPLES OF NUM

// int multiples(int n,int k){

//     if(k == 0){
//         return 0;
//     }   
//     multiples(n,k-1);
//     cout<<n*k<<" ";
// }

// int main(){

//     multiples(12,5);

//     return 0;
// }

// int alternate_sum(int n){
//     if(n== 0){
//         return 0;
//     }
//     return (alternate_sum(n-1)+((n%2 == 0)? (-n):n));
    
    
// }

// int main(){

//     cout<<alternate_sum(10);

//     return 0;
// }
//  HCF OF TWO NO.  => euclid's Algo => stats that hcf(a,b) is equal to hcf(b,a%b) assuming b > a;

// int hcf(int a ,int b){
//     if(b>a) return hcf(b,a);
//     if(b == 0) return a;
//     return hcf(b,a%b);

// }

// int main(){

//     cout<<hcf(40,48);

//     return 0;
// }

// ARMSTRONG NUMBER => 153 => 1^3 + 5^3 +3^3 = 153

// int armstrong(int n,int digits){
//     if(n == 0){
//         return 0;
//     }

//     return pow(n%10,digits) + armstrong(n/10,digits);
    
// }

// int main(){
//     int digits = 0;
//     int n = 153;

//     while(n>0){
//         digits++;
//         n /= 10;
//     }
//     cout<<armstrong(n,digits);
       

//     return 0;
// }

// print sums of all subsets in an array

// void subset_sum(int *arr,int n,int idx,int sum, vector<int> &result){
//     if(idx == n){
//         result.push_back(sum);
//         return;
//     }

//     subset_sum(arr,n,idx+1,sum+arr[idx],result);
//     subset_sum(arr,n,idx+1,sum,result);
    

// }

// int main(){
//     int arr[]= {1,2,3};
//     int n = 3;
//     vector<int> result;
//     subset_sum(arr,n,0,0,result);
//     for (int i = 0; i < result.size(); i++)
//     {
//         cout<<result[i]<<" ";
//     }
//     return 0;
// }


// count all the possible paths on an MxN grid from top left to bottom right // from each cell u can move only to right or down

// int f(int i,int j,int m,int n){
//     if(i == m-1 and j == n-1) return 1;
//     if(i >=m or j>=n) return 0;

//     return f(i+1,j,m,n) +f(i,j+1,m,n);
    
// }

// int main(){

//     cout<<f(0,0,3,3);
//     return 0;
//  }

// input = abc output = a,b,c,ab,bc,ac,abc

// void subsequences(string &s,int idx,string result,vector<string>&str){
//     if (idx == s.length())
//     {
//         str.push_back(result);
//         return;
//     }

//     subsequences(s,idx+1,result + s[idx],str);
//     subsequences(s,idx+1,result,str);

    


// }
 
// int main(){
//     string s = "abc";
//     vector<string>str;
//     string result ="";
//     subsequences(s,0,result,str);

//      for (int i = 0; i < str.size(); i++)
//     {
//         cout<<str[i]<<" ";
//     }
    

//     return 0;
// }

// input = "23" output => {"ad","ae","af","bd","be","bf","cd","ce" ,"cf"}

// void f(string &str,int idx,string result,vector<string>&li,vector<string>&v){
//     if(idx == str.size()) {
//         li.push_back(result);
//         return;
//     }
//     int digit = str[idx] - '0';
//     if(digit<=1){
//         f(str,idx+1,result,li,v);
//         return;
//     }
//     for (int i = 0; i < v[digit].size(); i++)
//     {
//         f(str,idx+1,result+v[digit][i],li,v);
//     }
//     return;
    
// }


// int main(){

//     vector<string> v(10);
//     v = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//     string str  = "23";
//     vector<string> li;
//     f(str,0,"",li,v);

//     for (int i = 0; i < li.size(); i++)
//     {
//         cout<<li[i]<<" ";
//     }
    


    
//     return 0;
// }



