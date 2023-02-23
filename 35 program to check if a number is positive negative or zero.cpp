#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number to be checked : ";
    cin>>num;
    
    if (num > 0)
         cout << "The number is positive";
    else if (num < 0)
        cout << "The number is negative";
    else
        cout << "Zero";
    
    return 0;
}
