#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    cout << "Enter a positive or negative integer number: ";
    cin >> x;
    if (x < 0) x *= -1;
    cout << "Absolute value of x is: " << x << endl;
    return (0);
}
