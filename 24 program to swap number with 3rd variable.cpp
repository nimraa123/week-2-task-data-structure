#include <iostream>
using namespace std;

int main()
{
    int num1, num2, temp;
    cout<<"Enter 1st Number: "; 
    cin>>num1;
    cout<<"Enter 2nd Number: "; 
    cin>>num2;

    cout<<"Before Swapping: First Number: "<<num1<<" Second Number: "<<num2;

    //swapping
    temp=num1;
    num1=num2;
    num2=temp;

    cout<<"After Swapping: First Number: "<<num1<<" Second Number: "<<num2;
    return 0;
}
