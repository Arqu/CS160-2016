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
    
	int sort, first;
	int exampleArray[1000];

	cout << "Please enter how many elements you want to sort: ";
	cin >> first;

	for ( int i = 0; i < first; i++ ) {
		cout << "Enter an element number " << i + 1 << ": ";
		cin >> exampleArray[i];
	}
    
    BubbleSort(exampleArray, first);
    
    DisplayArray(exampleArray, first);
    
    
    return 0;
}