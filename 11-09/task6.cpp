#include <iostream>
using namespace std;

int main() {

    int howManyNumbers, number, counter = 1, sum = 0, average = 0, product = 1;

    cout << "How many numbers would you like to operate with? ";
    cin >> howManyNumbers;

    do {
        cout << "Enter number " << counter << " : ";
        cin >> number;

        sum += number;
        product *= number;
        average = sum / counter;

        counter++;

    } while ( counter <= howManyNumbers );

    cout << endl;
    cout << "sum: " << sum << endl;
    cout << "prod: " << product << endl;
    cout << "avg: " << average << endl;

    return 0;
}
