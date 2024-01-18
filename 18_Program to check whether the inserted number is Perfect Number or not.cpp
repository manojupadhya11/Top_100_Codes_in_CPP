//Write a CPP Program to check whether inputted number is perfect number or not
//For Example: 28
//Divisors : 1 + 2 + 4 + 7 + 14 = 28
//A perfect number is a number in which the sum of the proper positive divisors of the number is equal to the number itself.

#include<iostream>
using namespace std;

int main()
{
    int num = 0,sum=0;
    cout<<"Enter a Number to chevk whether it is a Perfect Number or Not"<<endl;
    cin>>num;
    
    for(int i = 1; i<num; i++){
        if(num%i==0){
            sum = sum + i;
        }
    }

    if(sum == num )
    {
        cout<<num<<" is a Perfect Number";
    }
    else{
        cout<<num<<" is not a Perfect Number";
    }
    return 0;
}