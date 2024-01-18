//Program to find LCM of Two Numbers
//LCM, or least common multiple in mathematics, of two numbers is the smallest positive integer that is divisible by both the numbers.

#include<iostream>
using namespace std;


int main(){
    int num1,num2,lcm;
    cout<<"Enter the first Number"<<endl;
    cin>>num1;
    cout<<"Entert the Second Number"<<endl;
    cin>>num2;
    int max = (num1 > num2)? num1:num2;
    // LCM will atleast be >= max(num1, num2)
    // Largest possibility of LCM will be num1*num2
    for(int i = max; i<=num1*num2; i++){
        if(i%num1==0 && i%num2==0){
            lcm = i;
            break;
        }
    }
    
    cout<<"The LCM of "<<num1<<" and "<<num2<<" is: "<<lcm<<endl;

}