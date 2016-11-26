#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i=1; i<=n; i++) {
		int x = (sin(15 * i * 3.14 / 180) + 2) * 10;
		for (int j=0; j<x; j++) {
			cout << "#";
		}
		cout << endl;
	}
}
