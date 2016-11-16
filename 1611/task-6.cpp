#include <iostream>

using namespace std;

int main()
{
    int n, i;
    double sum = 0., average = 0., product = 1., a;
    cout << "Enter n: ";
    cin >> n;
    for (i=1; i<=n; i++)
    {
        cout << "Enter a number: ";
        cin >> a;
        sum += a;
        product *= a;
    }
    average = sum/n;
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Average: " << average << endl;
    return (0);
}
