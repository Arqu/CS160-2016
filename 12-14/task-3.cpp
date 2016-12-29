#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "How many integers do you want to enter(max 1000): ";
    cin >> n;
    while(n > 1000 || n < 1){
        cout << "Wrong input. Try again: ";
        cin >> n;
    }

    int numbers[1000];

    for(int i = 0; i < n; i++){

        cout << "Enter " << i + 1 << ". number: ";
        cin >> numbers[i];
    }
    for(int i = 0; i < n; i++){
        if(i == 0) cout << numbers[i] << endl;
        else cout << numbers[i] * numbers[i - 1] << endl;
    }

    return 0;
}
