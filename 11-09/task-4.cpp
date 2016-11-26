#include <iostream>

using namespace std;

int main() {
	int some_number;
	cin >> some_number;
	if (some_number < 0) {
		cout << -1 * some_number;
	} else {
		cout << some_number;
	}
}
