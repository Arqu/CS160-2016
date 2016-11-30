#include <iostream>
#include <cmath>

using namespace std;

int main (){

    int number;
    cin >> number;
for (int i = 1; i <= number; i++){
    int x = (sin(15 * i * 3.14 / 180) + 2) * 10 ;
    for ( int j = 0; j <= x; j++)
    cout << "#" ;
    cout << endl;
}
}
