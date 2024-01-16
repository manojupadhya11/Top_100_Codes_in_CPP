//Program to print the "n" fibbonaci series numbers
#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int num;
    cout<<"Enter a number "<<endl;
    cin>>num;
    int a=0, b=1;
    
    cout<<"The first "<<num<<" fibbonaci series numbers are:"<<endl;
    cout<<a<<" "<<b<<" ";
    
    for(int i=2; i<num; i++){
        int nextterm  = a+b;
        a = b;
        b = nextterm;
        cout<<nextterm<<" ";
    }

}