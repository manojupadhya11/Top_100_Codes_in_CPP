//Program to Calculate the Greatest of two user inputted Numbers
#include<iostream>
using namespace std;

int main(){
    int a, b=0;
    cout<<"Enter the value for the first number"<<endl;
    cin>>a;
    cout<<"Enter the value for second number"<<endl;
    cin>>b;
    if(a>b){
        cout<<a<<" is Greatest"<<endl;
        
    }else{
        cout<<b<<" is Greatest"<<endl;
    }
    return 0;
}