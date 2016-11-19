#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;

    if (x >= 4000000){
        cout << "The number has to be smaller than 4 million" << endl;
    }
    else{
        int fibonnaciNumber = 1;
        int secondNumber = 1;
        int sum = 0;

        for(int i = 1; i < x; i++){
            cout << fibonnaciNumber << " ";

            int c = fibonnaciNumber + secondNumber;
            fibonnaciNumber = secondNumber;
            secondNumber = c;
            if(fibonnaciNumber > x) break;
            if(fibonnaciNumber % 2 == 0) sum += fibonnaciNumber;

        }
        cout << endl << sum << endl;
    }


    return 0;
}
