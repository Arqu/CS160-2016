#include <iostream>

using namespace std;


long long factorial(int n){
    long long fac = 1;
    for(int i = 1; i <= n; i++)
        fac *= i;

    return fac;
}


int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    long long fac = factorial(n);

    int sum = 0;

    while(fac != 0){
        sum += fac % 10;

        fac /= 10;
    }

    cout << "The sum is " << sum << endl;
    return 0;
}
