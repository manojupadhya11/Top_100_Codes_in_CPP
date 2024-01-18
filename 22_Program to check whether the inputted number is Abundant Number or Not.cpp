//Program to check whether user inputted Number is Abundant Number or not
//Abundant Number is a number where sum of its proper divisors is greater than the number itself.
/***********
 * Ex:- Abundant number 12 having a proper divisor is 1, 2, 3, 4, 6 

The sum of these factors is 16 it is greater than 12 
So it is an Abundant number

Some other abundant numbers: 

18, 20, 30, 70, 78, 80, 84, 90, 96, 100, 104, 108, 120
*/
#include<iostream>
using namespace std;


int main(){
    int num;
    cout<<"Enter a number to check whether it is a Harshad  Number or not"<<endl;
    cin>>num;
    int temp_num = num;
    int sum = 0;
    for(int i = 1; i< temp_num; i++){
        if(temp_num%i == 0){
            sum = sum+i;
        }
    }
    if(sum>num){
        cout<<num<<" Is a Abundant Number"<<endl;
    }
    else{
        cout<<num<<" Is not a Abundant Number"<<endl;
    }
    return 0;
}