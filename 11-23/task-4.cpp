#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    cout << "Please enter any integer: ";
    int number;
    cin >> number;
    
    if ( number < 0 ) cout << "Absolute value is: " << abs(number) << endl;
    else if ( number >= 0 ) cout << "Absolute value is: " << number << endl;
    
    return 0;
}
