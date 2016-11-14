#include <iostream>
using namespace std;

int main() {
int n, x;
double sum = 0, avg = 0, prod = 1;
cout << "Input the number of numbers that you would like to calculate " << endl;
cin >> n;
// general practice is to go from 0 to <n since arrays are also 0 indexed thus you want to avoid calculating the indexes
// in the future as it is error prone unless you really need it
// another thing you should work on is your indentation and style consistency
// you are already ahead of the majority but thats something you can improve
// most notably indentation and spacing brackets - ){ => ) { and keep it consistent.
for (int i = 1; i <= n; i++){
    cout << "Please input a number :" << endl;
    cin >> x;

    sum = sum + x;
    // also you can optimise this part by moving the calculation below the 
    // loop as this can be done just after we get the final sum
    avg = sum / n;
    prod = prod * x;

}
cout<< "Sum of the inputed numbers is " << sum << endl;
cout << "Average of the inputed numbers is "<< avg << endl;
cout << "Product of the inputed numbers is "<< prod << endl;
}
