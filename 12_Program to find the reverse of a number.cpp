//Program to print the reverse of given number

#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int num, rev = 0;
    cout<<"Enter a number "<<endl;
    cin>>num;
    
    while(num!=0){
        int rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    cout<<"The reverse of given number is  "<<rev<<endl;

}