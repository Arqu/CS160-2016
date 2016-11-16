#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter how many numbers you want to enter"<< endl;
    cin >> number;
    int sumofnumbers = 0;
    int multiplication = 1;
    int average = 0;
    int nums;
    int controla;
    int copyofnum = number;
    for (int i = 1; i <= number; i++){
    cout << "Enter a number" << endl;
    cin >> nums;
    sumofnumbers += nums;
    multiplication *= nums;
    }
    cout << "Sum is " << sumofnumbers << endl;
    cout << "Product of numbers is " << multiplication << endl;
    cout << "Average is " << sumofnumbers / copyofnum;
}
