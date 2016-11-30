#include <iostream>
#include <cmath>

using namespace std;

int main (){

int number;
cout << "Enter a number" << endl;
cin >> number;
for (int i = 1; i < number; i++){
    int x = ((sin(15 * i * 3.14 / 180) + cos(15 * i * 3.14 / 180)) + 2) * 10;
    for (int p = 0; p < x; p++){
        cout << "#"; }
    cout << endl;
}
}
