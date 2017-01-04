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
    
	int sort, first;
	int exampleArray[1000];

	cout << "Please enter how many elements you want to sort: ";
	cin >> first;

	for ( int i = 0; i < first; i++ ) {
		cout << "Enter an element number " << i + 1 << ": ";
		cin >> exampleArray[i];
	}
    
    SelectSort(exampleArray, first);
    
    DisplayArray(exampleArray, first);
    
    
    return 0;
}