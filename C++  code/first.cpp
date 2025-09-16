#include<iostream>
using namespace std;

// bitwise opertor
// & => and
// | => or

// logical operator 
// && = and
// ||  = or
// ! = not

// left shift(<<) example = a<<b => a*2^b
// right shift (>>) example = a>>b => a/2^b

// Misc operator => &(address operator) , * = pointer operator

// if else
// int main(){

// int num;
// cout<<"Enter a number :";
// cin>>num;

// if (num%2 == 0)
// {
//     cout<<"number is even";
// }
// else{
//     cout<<"number is odd";
// }

    
// }

// Switch case 
// int main(){
//     char character;
//     cout<<"Enter a character :";
//     cin>>character;

//     switch (character)
//     {
//     case 'a':
//         cout<<"Vowel";
//         break;

//     case 'e':
//         cout<<"Vowel";
//         break;
    
//     case 'i':
//         cout<<"Vowel";
//         break;
    
//     case 'o':
//         cout<<"Vowel";
//         break;
    
//     case 'u':
//         cout<<"Vowel";
//         break;
        
    
//     default:
//         cout<<"consonant";
//         break;
//     }


// }
// Loops

// int main(){

//     int n;
//     cout<<"Enter a number :";
//     cin>>n;

//     int sum = 0;

//     int i = 1;
//     while (i<=n)
//     {
//         sum+= i;
//         i++;
//     }
//     cout<<"sum is: " <<sum;

//     return 0;
    
// }

// int main(){

//     int num;
//     cout<<"Enter a number :";
//     cin>>num;

//     for (int i = 1; i <= num; i++)
//     {
//         cout<<i;
//     }
    
//     return 0;

// }

// Print the first multiple of 5 which is also a multiple of 7 using break statement

// int main(){

//     int n = 5;
    
//     while(true){
//         if(n%7 == 0){
//             cout<<n;
//             break;
//         }
//         n+= 5;
//     }
    

//     return 0;
// }

// print the sum of first n integers using do while loop
// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     int sum = 0;

//     do{
//         sum+= n;
//         n--;

//     }while (n>0);
//     cout<<sum;

//     return 0;
    
    
// }


// Continue keyword

// print all the values btw 1 and 50 except the multiple of 3
// int main(){

//     for (int i = 1; i <=50 ; i++)
// {
//     if (i%3 == 0)
//     {
//         continue;
//     }
//     cout<<i<<" ";
// }


// }
// Pattern printing

// Hollow Rectangular Pattern
// int main(){

//     int n,m;
//     cout<<"Enter Row: ";
//     cin>>n;
//     cout<<"Enter Column: ";
//     cin>>m;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=m; j++)
//         {
//             if (i ==1 || i == n || j ==1|| j==m)
//     {
//         cout<<"*"<<" ";
//     }

//     else{
//         cout<<"  ";
//     }
    
//         }
//         cout<<endl;
        
//     }
    
    

                         
//     return 0 ;
// }

// TRIANGULAR PATTERN

// int main(){

//     int n,m;
//     cout<<"Enter Row: ";
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    

    
                     
                     
//     return 0 ;
// }

// REVERSE TRIANGULAR PATTERN

// int main(){

//     int n,m;
//     cout<<"Enter Row: ";
//     cin>>n;

//     for (int i = n; i>0; i--)
//     {
//         for (int j = i; j >0; j--)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    

    
                     
                     
//     return 0 ;
// }

// int main(){

//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j <= n-i; j++)
//         {
//             cout<<" ";
//         }

//         for (int k = 1; k <= 2*i - 1; k++)
//         {
//             cout<<"*";
//         }

//         cout<<endl;
        
        
//     }
                     
                     
//     return 0 ;
// }

// int main(){

//     int n;
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j<=n; j++)
//         {
//             cout<<j;
//         }
//         for (int k = 1; k <= i-1; k++)
//         {
//             cout<<k;
//         }
//         cout<<"\n";
        
        
//     }
    
                     
                     
//     return 0 ;
// }

// TRY THIS

// 121212
// 212121
// 121212
// 212121
// int main(){

//     int n,m;
//     cin>>n>>m;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j<=m; j++)
//         {
//             if ((i+j)%2==0)
//             {
//                 cout<<1;
//             }
//             else{
//                 cout<<2;
//             }
            
//         }
//         cout<<endl;
        
//     }
    
                     
                     
//     return 0 ;
// }
// COUNT THE DIGITS IN A NUMBER
// int main(){

//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;

//     int digits = 0;
//     while (num > 0)
//     {
//         num /= 10;
//         digits += 1;
//     }
//     cout<<digits;              
                     
//     return 0 ;
// }
// FIND THE SUM OF THE DIGITS OF A NUMBER
// int main(){

//     int num;
//     cin>>num;

//     int sum = 0;

//     while (num>0)
//     {
//         int lastdig;
//         lastdig = num%10;
//         sum += lastdig;
//         num /= 10;
//     }

//     cout<<sum;
//     return 0;
// }

//REVERSE THE DIGITS OF A NUMBER
// int main(){

//     int n;
//     cin>>n;

//     while (n>0)
//     {
//         int lastdig ;
//         lastdig = n%10;
//         cout<<lastdig;
//         n /=10;
//     }               
//     return 0 ;
// }

// find the sum of the series 1-2+3-4.....n

// int main(){

//     int n;
//     cin>>n;

//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i%2==0){
//             sum -= i;
//         }

//         else{

//             sum += i;

//         }

//     }

//     cout<<sum;
    
                     
                     
//     return 0 ;
// }

// BINARY TO DECIMAL

// int main(){

//     int num ;
//     cout<<"Enter a binary number: ";
//     cin>>num;

//     int ans = 0;
//     int power = 1;

//     while(num>0){

//         int lastdigt;
//         lastdigt = num%10;

//         ans = ans + lastdigt*power;
//         power *= 2;
//         num /= 10;

//     }

//     cout<<ans;

//     return 0;
// }

// CONVERSION OF DECIMAL TO BINARY

// int main(){

//     int n;
//     cin>>n;
//     int ans = 0;
//     int power=1;

//     while (n>0)
//     {
//         int paritydigit = n%2;
//         ans += paritydigit*power;  
//         power *= 10;
//         n /= 2;      

//     }
//     cout<<ans;                    
                     
//     return 0 ;
// }