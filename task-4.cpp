#include <iostream>

using namespace std;

void DisplayArray(int a[], int n){
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;cout << endl;
}


int main(){

    int n;

    cout << "How many elements do you want in your array(max. 100): ";

    cin >> n;

    int a[100];

    while(n > 100 || n < 1){
        cout << "Wrong input. Try again: ";
        cin >> n;
    }
    for(int i = 0; i < n; i++){
        cout << "Enter " << i + 1 << ". element: ";
        cin >> a[i];
    }

    DisplayArray(a, n);

    int range = (n % 2 == 0) ? (n / 2) : (n / 2 + 1);
    for(int i = 0; i < range; i++){

        cout << a[range - 1 - i] << " ";
    }
    int counter = 1;
    for(int i = range; i < n; i++){
        cout << a[n - counter] << " ";
        counter++;
    }

}