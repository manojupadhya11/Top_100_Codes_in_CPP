//Program to check whether user inputted number is Harshad Number or not

//A Harshad number is a positive integer that is divisible by the sum of the digits of the integer. It is also called the Niven number.
#include<iostream>
using namespace std;

int is_harshad(int num){
    int temp_num = num;
    int sum = 0;
    while(temp_num!=0){
        if(num>0){
            sum = sum + temp_num%10;
            temp_num = temp_num/10;
        }
        
    }
    return num%sum == 0;
    

}

int main(){
    int num;
    cout<<"Enter a number to check whether it is a Harshad  Number or not"<<endl;
    cin>>num;
    
    if(is_harshad(num)){
        cout<<num<<" is a Harshad Number"<<endl;
    }
    else
    {
        cout<<num<<" Is not a Harshad Number"<<endl;
    }
    return 0;
}