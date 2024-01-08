//4_5 Program to find sum of numbers in the given range
#include <iostream>

using namespace std;

int main()
{
    int low, high = 0;
    cout<<"Enter the low Range"<<endl;
    cin>>low;
    cout<<"Enter the High Range"<<endl;
    cin>>high;
    int sum = 0;
    for(int i = low; i<=high; i++){
        sum += i;
    }
    
    cout<<"The sum is "<<sum<<endl;
    

    return 0;
}