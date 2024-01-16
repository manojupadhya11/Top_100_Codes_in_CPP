//Program to find the factorial of user inputted number
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number "<<endl;
    cin>>num;
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact = fact*i;
    }
    cout<<"The factorial of "<<num<<" is:- "<<fact<<endl;

}