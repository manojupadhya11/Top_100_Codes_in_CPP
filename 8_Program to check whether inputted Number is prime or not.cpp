//Program to check whether inputted Number is prime or not

#include<iostream>
using namespace std;
#define MAX 100;

int main(){
    int a, num, count =0;
    cout<<"Enter a number to check whether it is prime or not"<<endl;
    cin>>num;
    
    //checking the number of divisors between 0 and num
    for(int i = 1; i<=num+1; i++){
        if(num%i==0){
            count += 1; //if number of divisor is greater than 2 then num is not prime
        }
    }
    //excluding 0 and 1 since they are not prime
    if(num == 0 || num == 1){
        cout<<num<< " is not a prime number"<<endl;
        
    }
    else if(count > 2){
        cout<<num<<" is not a prime number"<<endl;
    }
    else{
        cout<<num<< " is a prime number"<<endl;
    }
    return 0;
    
    
}