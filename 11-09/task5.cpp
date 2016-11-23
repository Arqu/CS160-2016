#include <iostream>
using namespace std;
int main () {
int number = 1, min, max, counter = 1;

do {
    cin >> number;

    if ( counter == 1 ) {
        max = number;
        min = number;
    }

    else {

    if (number > max) max = number;
    else if (number < min && number != 0) min = number;
    }
    counter++;
} while (number != 0);

cout << "Max number is: " << max << endl;
cout << "Min number is: " << min;




return 0;
}
