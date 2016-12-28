#include <iostream>

using namespace std;


void SelectSort(int a[], int n){
    for(int k = 0; k < n - 1; k++){
        int indmin = k;
        for(int i = k+1; i < n; i++)
            if(a[i] < a [indmin]) indmin = i;
        if(indmin != k){
            int temp = a[k];
            a[k] = a[indmin];
            a[indmin] = temp;
        }
        
    }
    
}
void DisplayArray(int a[], int n){
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int main(){
    
    int exampleArray[5] = {1, 4, 6, 8, 3};
    
    SelectSort(exampleArray, 5);
    DisplayArray(exampleArray, 5);
    
    
    return 0;
}
