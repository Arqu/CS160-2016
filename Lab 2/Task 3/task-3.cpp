#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	cin >> input;

	for (int i=0; i<input.size(); i++) {
		for (int j=0; j<input.size(); j++) {
			if (j==i) {
				continue;
			}
			for (int k=0; k<input.size(); k++) {
				if (k==j || k==i) {
					continue;
				}
				for (int l=0; l<input.size(); l++) {
					if (l==k || l==j || l==i) {
						continue;
					}
					for (int m=0; m<input.size(); m++) {
						if (m==l || m==k || m==j || m==i) {
							continue;
						}
						cout << input[i] << input[j] << input[k] << input[l] << input[m] << endl;
					}
				}
			}
		}
	}
}
