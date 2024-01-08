//Program to caluculate Sum of first 'n' natural numbers
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int sum =0;
    cout<<"The Sum of first "<<n<<" Natural Number is"<<endl;
    for(int i =0; i<=n; i++){
        sum += i;
    }
    cout<<sum;

    return 0;
}