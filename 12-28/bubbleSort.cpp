#include <iostream>

using namespace std;

void BubbleSort(int a[], int n){
    for(int k = 1; k < n; k++){
        bool wasSwapped = false;
        for(int i = 0; i < n - k; i++){
            if(a[i + 1] < a[i]){
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;

                wasSwapped = true;
            }
        }
        if(!wasSwapped) break;
    }

}


void DisplayArray(int a[], int n){
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int main(){

    int exampleArray[5] = {1, 4, 6, 8, 3};

    BubbleSort(exampleArray, 5);

    DisplayArray(exampleArray, 5);


    return 0;
}
