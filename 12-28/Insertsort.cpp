#include <iostream>

using namespace std;


void InsertSort(int a[], int n){
    int j, temp;
    
    for (int i = 0; i < n; i++){
        j = i;
        
        while (j > 0 && a[j] < a[j-1]){
            temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            j--;
        }
    }
    
}


void DisplayArray(int a[], int n){
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}


int main(){
    
    int exampleArray[5] = {1, 4, 6, 8, 3};
    
    InsertSort(exampleArray, 5);
    
    DisplayArray(exampleArray, 5);
    
    return 0;
}
