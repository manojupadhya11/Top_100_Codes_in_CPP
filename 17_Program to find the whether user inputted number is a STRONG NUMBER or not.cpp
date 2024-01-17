//Write a CPP PRogram to checj whether the inserted number is Strong Number or NOt 145 = 1! x 4! x 5!

#include<iostream>
using namespace std;
//function to calculate factorial
int facto(int num){
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact = fact*i;
    }
    return fact;
}

int is_strong(int num){
    int digit, sum = 0;
    int temp = num;
    while(temp!=0){
        digit  = temp%10;
        sum = sum + facto(digit);
        temp = temp/10;
    }
    return sum == num;
}
int main(){
    int num = 0;
    cout<<"Enter a Number to chevk whether it is a Strong Number or Not"<<endl;
    cin>>num;

    if(is_strong(num)){
        cout<<num<<" is a Strong Number";
    }else{
        cout<<num<<" is not a strong Number";
    }
    return 0;
}