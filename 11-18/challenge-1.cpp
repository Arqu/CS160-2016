#include <iostream>
#include <vector>
#include <string>

using namespace std;

int getNumOfDigits(int n){
    int num = n;
    int counter = 0;
    while(num != 0){
        num /= 10;
        counter++;
    }

    return counter;
}
vector<int> getVectorOfDigits(int n){
    vector<int> vectorOfDigits(getNumOfDigits(n));
    int num = n;
    int counter = 0;
    while(num != 0){
        vectorOfDigits[counter] = num % 10;
        num /= 10;
        counter++;

    }
    return vectorOfDigits;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;


    int sum = 0;
    int repeatingDigit = 0;
    int counter = 0;
    while(sum != 1){
        sum = 0;
        vector<int> vectorOfDigits(getNumOfDigits(n));
        vectorOfDigits = getVectorOfDigits(n);
        for(int i = 0; i < getNumOfDigits(n); i++){
            sum += vectorOfDigits[i] * vectorOfDigits[i];
        }
        if(repeatingDigit == sum){
            break;
        }
        n = sum;
        cout << n << endl;
        if(counter == 5) repeatingDigit = sum;

        counter++;

    }
    string msg = (sum == 1) ? ":)" : ":(";
    cout << msg;


    return 0;
}
