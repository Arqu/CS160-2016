#include <iostream>

using namespace std;

int main(){


    long long n;

    cout << "Enter an integer number: ";
    cin >> n;

    long long reverseN = 0;

    while(n != 0){
        int digit = n % 10;

        reverseN *= 10;
        reverseN += digit;

        n /= 10;
    }
    while(reverseN != 0){
        cout << reverseN % 1000;

        reverseN /= 1000;
    }

    return 0;
}
