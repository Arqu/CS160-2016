#include <iostream>

using namespace std;

int main (){
int number;
int maxsofar = 0;
int minsofar = 0;
cout << "Enter 4 numbers " << endl;
for (int i = 0; i < 4; i++){
    cin >> number;
    if ( i == 0){
        maxsofar = number;
        minsofar = number;
    }
    if (number > maxsofar){
        maxsofar = number;
    }else if (number < minsofar){
        minsofar = number;
    }
}
cout << "Largerst number enteres is " << maxsofar << "\nSmallest number entered is " << minsofar << endl;
return 0;
}
