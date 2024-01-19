//Program to Convert given Binary Numbers to Decimal Number
//Binary Numbers are used by computers to do almost all operations. We will look at how Binary to decimal conversion in C++ works.


#include<iostream>
#include<math.h>
#include<typeinfo>

using namespace std;
int getDecimal(long long num){
    int i=0, decimal = 0;
    
    while(num!=0){
        int digit = num%10;
        decimal += digit*pow(2,i);
    
        num /= 10;
        i++;
    }
    return decimal;

}

int main(){
    long long num;
    cout<<"Enter the Binary Number "<<endl;
    cin>>num;
    cout<<"The Decimal of given binary Number is:-"<<getDecimal(num)<<endl;        
    return 0;
    
    
}