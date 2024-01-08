//7_Program to Calculate the Greatest of three user inputted Numbers
#include<iostream>
using namespace std;

int main(){
    int a, b, c=0;
    cout<<"Enter the value for the first number"<<endl;
    cin>>a;
    cout<<"Enter the value for second number"<<endl;
    cin>>b;
    cout<<"Enter the value for third Number"<<endl;
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is Greatest"<<endl;
        
    }else if (b>a && b>c){
        cout<<b<<" is Greatest"<<endl;
    }
    else if(c>a && c>b){
        cout<<c<<" is Greatest"<<endl;
    }
    return 0;
}