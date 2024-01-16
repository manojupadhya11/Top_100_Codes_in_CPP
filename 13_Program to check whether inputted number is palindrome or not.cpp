//Program to check whether the given number is palindrome or not

#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int num, rev = 0;
    cout<<"Enter a number "<<endl;
    cin>>num;
    int number = num;
    
    while(num!=0){
        int rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    cout<<"The reverse of given number is  "<<rev<<endl;
    
    if(rev == number){
        cout<<"The given number is palindrome"<<endl;
        
    }else{
        cout<<"The given number is not a palindrome number"<<endl;
    }

}