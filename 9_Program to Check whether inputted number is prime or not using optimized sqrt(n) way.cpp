//Program to check whether inputted Number is prime or not optimized solution sqrt(n)

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num=0;
    bool isprime = true;
    cout<<"Enter a number to check whether it is prime or not"<<endl;
    cin>>num;
    
    //checking the number of divisors between 0 and num
    if(num < 2){
        isprime = false;
    }else{
        for(int i = 2; i<sqrt(num); i++){
            if(num%i == 0){
                isprime = false;
                break;
            }
        }

    }
    if(isprime == true){
        cout<<num<<" is a prime number"<<endl;
    }
    else{
        cout<<num<<" is not a prime number"<<endl;
    }
    return 0;
    
}