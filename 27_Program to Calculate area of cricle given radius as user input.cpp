//Program to Calculate area of circle given user input of radius

#include<iostream>
using namespace std;
#define pi 3.14

int main(){
    
    float radius;
    
    cout<<"Enter the Radius"<<endl;
    cin>>radius;
    
    float area = pi*radius*radius;
    
    cout<<"The area of circle is:-  "<<area<<endl;
    return 0;
}