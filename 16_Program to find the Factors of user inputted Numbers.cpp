//Program to find the fcators of user inputted number
#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int num;
    cout<<"Enter a number "<<endl;
    cin>>num;
    cout<<"The Factors of "<<num<<" are: - ";
    for(int i = 1; i<=num; i++){
        if(num%i == 0){
            cout<<i<< " ";
        }
    }

}