#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	//sine of 90 degrees is the max amount
	int max_h =  (sin(90 * 3.14 / 180) + 2) * 10;
	cin >> n;

	for (int i=0; i<max_h; i++) {
		for (int j=1; j<=n; j++) {
			int x = (sin(15 * j * 3.14 / 180) + 2) * 10;
			if (x >= max_h - i) {
				cout << "#";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
}
