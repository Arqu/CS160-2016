#include <iostream>
#include <cmath>

using namespace std;

void graph(int n){
    for(int i=1; i<=n; i++) {
        int k=(((sin(15 * i * 3.14 / 180) \
             + cos(15 * i * 3.14 / 180)) + 2) * 10);
        for(int j=0; j<k; j++) cout << "#";
        cout << endl;
    }
return;
}

int main() {

cout << "Input integer: ";
int n;
cin >> n;

graph(n);

return 0;
}
