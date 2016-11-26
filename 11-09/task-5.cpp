#include <iostream>

using namespace std;

int main() {
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	
	if (a >= b && a >= c && a >= d) {
		cout << "max: " << a;
	} else if (b >= a && b >= c && b >= d) {
		cout << "max: " << b << endl;;
	} else if (c >= a && c >= b && c >= d) {
		cout << "max: " << c << endl;;
	} else {
	    cout << "max: " << d << endl;
	}
	
	if (a <= b && a <= c && a <= d) {
		cout << "min: " << a;
	} else if (b <= a && b <= c && b <= d) {
		cout << "min: " << b << endl;;
	} else if (c <= a && c <= b && c <= d) {
		cout << "min: " << c << endl;;
	} else {
	    cout << "min: " << d << endl;
	}
}
