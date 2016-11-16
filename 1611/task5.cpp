#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i;
    double maximum = -10000000., x, minimum = 10000000.;
    for (i = 1; i <= 4; i++)
    {
        cout << "Enter a real number: ";
        cin >> x;
        if (x > maximum) maximum = x;
        else if (x < minimum) minimum = x;
    }
    cout << "max number is: " << maximum << endl;
    cout << "min number is: " << minimum << endl;
    return (0);
}

