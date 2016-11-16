#include <iostream>

using namespace std;

int main()
{
    double max_number, min_number, x;
    int i;
    for (i=1; i<=4; i++)
    {
        cout << "Enter a number: ";
        cin >> x;
        if (i == 1)
            {
                max_number = x;
                min_number = x;
            }
        if (x > max_number) max_number  = x;
        if (x < min_number) min_number  = x;
    }
    cout << "max: " << max_number << endl;
    cout << "min: " << min_number << endl;
    return (0);
}
