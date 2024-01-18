//Program to find HCF of Two Numbers

#include<iostream>
using namespace std;


int main(){
    int num1,num2=0;
    cout<<"Enter the first Number"<<endl;
    cin>>num1;
    cout<<"Entert the Second Number"<<endl;
    cin>>num2;
    int hcf = 0;
    for(int i = 1; i<=num1 || i<=num2; i++){
        if(num1%i == 0 && num2%i ==0){
            hcf = i;
        }
    }
    cout<<"The HCF of "<<num1<<" and "<<num2<<" is: "<<hcf<<endl;

}