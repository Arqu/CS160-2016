#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter a number" << endl;
	int n;
	cin >> n;

	int formula =  (sin(90 * 3.14 / 180) + 2) * 10;


	for (int i = 0; i < formula ; i++) {
		for (int j = 1; j <= n; j++) {
			int x = (sin(15 * j * 3.14 / 180) + 2) * 10;
			if (x >= formula - i) {
				cout << "#";
			} else {
				cout << " ";
			}
		}
    cout << endl;
	}
}
