#include <iostream>

using namespace std;

int main() {
	int sum = 0, product = 1;
	int n, tmp;
	cin >> n;

	if (n != 0) {
		for (int i=0; i<n; i++) {
		    cin >> tmp;
		    sum += tmp;
		    product *= tmp;
		}
	} else {
		cout << "sum: 0" << endl;
		cout << "prod: 0" << endl;
		cout << "avg: 0" << endl;
	}
	
}
