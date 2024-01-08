//Program to check whether given number is Even or Odd
#include<iostream>
using namespace std;

int main(){
    
    int a ;
    cout<<"Enter a number to check whether Even or Odd"<<endl;
    cin>>a;
    if(a%2==0){
        cout<<"The given number is even"<<endl;
    }else{
        cout<<"The given number is odd"<<endl;
    }
    return 0;
}