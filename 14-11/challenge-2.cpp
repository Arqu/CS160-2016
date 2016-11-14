#include <iostream>
using namespace std;
// code style?
int main() {
int n;
cout << "How many Fib. numbers would you like?\n";
cin>> n;
int a = 1, b = 1;
double sum = 0;
// no need for this it said it would be a positive integer not a non-negative one
if (n == 0){
    cout << "Are you okay? Everything alright??";
    return 0;}
// again loops from 0 to < n not 1 to <= n
for(int i = 1; i <= n; i++) {
    int c = a + b;
    cout << a << " " ;
    a = b;
    b = c;
    // I don't think you quite follow the task descriptions not sure what this does either
    sum = c - 1;
}
// while it might seem more relaxed having funny messages around
// and not that I dont appreciate it, but for automatic grading this 
// just disqualifies you
// also stick to one style either use \n on endl dont mix and match
// my sugesstion is \n
cout <<"\nSum of these lovely numbers is " << sum<< endl;


return 0;
}
