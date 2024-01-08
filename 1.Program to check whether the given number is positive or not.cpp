//Program to check whether given number is positive or not
#include<iostream>
using namespace std;

int main(){
    
    int a ;
    cout<<"Enter a number to check whether positive or negative"<<endl;
    cin>>a;
    if(a>0){
        cout<<"Positive Number"<<endl;
    }else if(a<0){
        cout<<"Negative Number"<<endl;
        
    }
    else{
        cout<<"The given Number is Zero"<<endl;
    }
    return 0;
}