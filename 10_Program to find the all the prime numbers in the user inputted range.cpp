//Program to check whether inputted Number is prime or not the given range of numbers

#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int num){
    if(num < 2){
        return false;
    }else{
        for(int i = 2; i<num; i++){
            if(num%i == 0){
                return false;
                break;
            }
        }

    }
    return true;
    
}

int main(){
    int lower,higher;
    
    cout<<"Enter a lower range "<<endl;
    cin>>lower;
    cout<<"Enter a higher range "<<endl;
    cin>>higher;
    
    for(int i = lower; i<=higher; i++){
        if(isprime(i)==true){
            cout<<i<<" ";
        }
    }
    
}