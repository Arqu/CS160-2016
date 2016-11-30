#include <iostream>
#include <cmath>

using namespace std;

int funct (int n)
{
    int square = pow(n,2);
    return square;
}

int main()
{
    int x;
    cout << "enter x: ";
    cin >> x;
    cout << funct(x) << endl;
    return (0);
}
