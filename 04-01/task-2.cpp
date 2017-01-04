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
    
	int sort, first;
	int exampleArray[1000];

	cout << "Please enter how many elements you want to sort: ";
	cin >> first;

	for ( int i = 0; i < first; i++ ) {
		cout << "Enter an element number " << i + 1 << ": ";
		cin >> exampleArray[i];
	}
    
    InsertSort(exampleArray, first);
    
    DisplayArray(exampleArray, first);
    
    
    return 0;
}