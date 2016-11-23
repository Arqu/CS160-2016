#include <iostream>
using namespace std;

int main() {

	cout << "Please enter n: ";
	int number;
	cin >> number;

	for (int i = 1; i <= number; i++) {
		int wild = (sin(15 * i * 3.14/180) + 2) * 10;
		for ( int j = 1; j <= wild + i; j++ ) cout << "#";
		cout << endl;
	}
	return 0;
}