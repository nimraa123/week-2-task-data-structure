#include<iostream>
using namespace std;
int main()
{
    int days, years, weeks;
    cout << "Enter days:";   
    cin >> days;
    
    years = (days / 365);
    weeks = (days % 365) / 7;
    days  = days - ((years * 365) + (weeks * 7));
    cout << "TOTal Years : " << years <<endl;
    cout << " Total weeks : " << weeks <<endl; 
    cout << "TOtal Days : " << days <<endl;
    
    return 0;
}
