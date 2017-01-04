#include <iostream>

using namespace std;

void SelectSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int indexMin = i;
        for(int j = i + 1; j < n; j++){
            if(a[indexMin] > a[j]) indexMin = j;
        }
        if(indexMin != i){
            int temp = a[indexMin];
            a[indexMin] = a[i];
            a[i] = temp;
        }
    }

}


void DisplayArray(int a[], int n){
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
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
    SelectSort(a, n);
    DisplayArray(a, n);

}
