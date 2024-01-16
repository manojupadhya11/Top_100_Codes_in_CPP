//Program to find the sum of all digits of a given number

#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int num, sum = 0;
    cout<<"Enter a number "<<endl;
    cin>>num;
    
    for(int i = 0; i<=num; i++){
        int rem = num%10;
        sum = sum + rem;
        num = num/10;
    }
    cout<<"Sum of the digits of given number is "<<sum<<endl;

}