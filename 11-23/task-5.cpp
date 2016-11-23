#include <iostream>
using namespace std;

int main() {
    
    int number, counter = 1, minsofar, maxsofar;
    
    do {
        cout << "Enter a number: ";
        cin >> number;
        
        if ( counter == 1 ) {
            minsofar = number;
            maxsofar = number;
        }
        
        else {
            if ( number > maxsofar ) maxsofar = number;
            else if ( number < minsofar ) minsofar = number;
        }
        
        counter++;
        
    } while ( counter <= 4 );

    cout << endl; // For beautiful output
    
    cout << "min: " << minsofar << endl;
    cout << "max: " << maxsofar << endl;
    
    return 0;
}
