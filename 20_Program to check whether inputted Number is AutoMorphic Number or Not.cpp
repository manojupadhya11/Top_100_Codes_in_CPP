//Program to check whether user inputted number is Automorphic Number or not

//An Automorphic number is a special number, whose’s square ends with the same digits as the number itself

#include<iostream>
using namespace std;

int is_automorphic(int num){
    
    int square = num* num;
    
    while(num!=0){
        if(num%10 != square%10){
            return 0;
        }
        num = num/10;
        square /= 10;
    }
    return 1;
}

int main(){
    int num;
    cout<<"Enter a number to check whether it is an Automorphic Number or not"<<endl;
    cin>>num;
    
    if(is_automorphic(num)){
        cout<<num<<" is an Automorphic Number"<<endl;
    }
    else
    {
        cout<<num<<" Is not an Automorphic Number"<<endl;
    }
    return 0;
}