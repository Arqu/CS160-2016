#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, prod = 1, aver = 0, newnum, br;
    cout << "Type a number: ";
    cin >> n;
    br = n;
    for (int i = 0; i < br; i++)
    {
        cout << "Type another number: ";
        cin >> newnum;
        sum += newnum;
        prod *= newnum;
        aver = sum / br;
    }
    cout << "Sum: " << sum << endl;
    cout << "Product: " << prod << endl;
    cout << "Average: " << aver;
}
