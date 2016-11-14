#include <iostream>
using namespace std;

int main() {
int n;
cout << "How many Fib. numbers would you like?\n";
cin>> n;
int a = 1, b = 1;
double sum = 0;

if (n == 0){
    cout << "Are you okay? Everything alright??";
    return 0;}

for(int i = 1; i <= n; i++) {
    int c = a + b;
    cout << a << " " ;
    a = b;
    b = c;
    sum = c - 1;
}
cout <<"\nSum of these lovely numbers is " << sum<< endl;


return 0;
}
