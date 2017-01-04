#include <iostream>

using namespace std;

void InsertSort(int a[], int n){
    for(int i = 0; i < n; i++){
        int j = i;

        while(j > 0 && a[j] < a[j - 1]){
            int temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
            j--;
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
    InsertSort(a, n);
    DisplayArray(a, n);


    return 0;
}
