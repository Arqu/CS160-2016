#include <iostream>
using namespace std;

int main() {
int n, x;
double sum = 0, avg = 0, prod = 1;
cout << "Input the number of numbers that you would like to calculate " << endl;
cin >> n;
for (int i = 1; i <= n; i++){
    cout << "Please input a number :" << endl;
    cin >> x;

    sum = sum + x;
    avg = sum / n;
    prod = prod * x;

}
cout<< "Sum of the inputed numbers is " << sum << endl;
cout << "Average of the inputed numbers is "<< avg << endl;
cout << "Product of the inputed numbers is "<< prod << endl;
}
