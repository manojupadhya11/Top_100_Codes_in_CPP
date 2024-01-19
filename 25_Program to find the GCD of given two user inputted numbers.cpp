//Program to Calculate the GCD(Greates Common Divisor ) of Two Numbers
/*
GCD (Greatest Common Divisor) of two numbers is the largest number that divides both numbers.
The GCD of 45 and 30 will be :
Factors of 45 are 3 X 3 X 5
Factors of 30 are 2 X 3 X 5
Common factors of 45 and 30 are : 3 X 5 , So the required GCD will be 15

*/
#include<iostream>
using namespace std;


int main(){
    int num1, num2;
    cout<<"Enter Num1"<<endl;
    cin>>num1;
    cout<<"Enter Num2"<<endl;
    cin>>num2;
    int gcd;
    for(int i = 1; i<=num1 || i<=num2; i++){
        if(num1%i == 0 && num2%i == 0 ){
            gcd = i;
        }
    }
    cout<<"The GCD of "<<num1<<" and "<<num2<< " is :- "<<gcd<<endl;
    return 0;
    
}