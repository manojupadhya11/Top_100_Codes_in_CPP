//PRogram to check whether the user inputted Number is a Perfect Square Numbe  or not

#include<iostream>
#include<math.h>
using namespace std;

int is_Perfect_square(int num){
    
    if(num>=0){
        long long sr = sqrt(num);
        return (sr*sr == num);
    }
    return false;
}


int main(){
    int num;
    cout<<"Enter a Number to check whether it is Perfect Square or Not "<<endl;
    cin>>num;
    
    if(is_Perfect_square(num)){
        cout<<num<<" is a Perfect Square Number"<<endl;
    }else{
        cout<<num<<" is not a Perfect Sqaure Nnumber"<<endl;
    }
    return 0;
}