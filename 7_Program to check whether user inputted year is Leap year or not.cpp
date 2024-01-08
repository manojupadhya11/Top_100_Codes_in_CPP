//8_Program to check whether user inputted year is Leap year or not
#include<iostream>
using namespace std;
int main(){
    
    int year = 0;
    cout<<"Enter Year to check whether it is a Leap year or not"<<endl;
    cin>>year;
    if((year%4==0 && year%100 != 0)|| year%400 ==0){
        cout<<year<<" is a Leap Year"<<endl;
    }
    else{
        cout<<year<<" is not a Leap Year"<<endl;
    }
    return 0;
}