#include <iostream>
#include <string>
// what do you use these for?
#include <cmath>
#include <iomanip>
#include <cctype>


 using namespace std;
// code style?
 int main()
 {
int n;
int sum = 0;
cin>>n;
// why - why not do some extra work and make it work for any number? it's a challenge after all
if (int (log10(n) + 1) > 4) {
    cout << "Lets keep it small shall we?";
    return 0;
}

while (1){
sum=0;
 while (n)
 {
     sum = sum +(n % 10) *(n % 10);
     n = n / 10;
 }
 // what exactly does this line do
 // shouldnt it just be n = sum?
 n = sum + n;
if (n == 1) {
    cout<< ":)";
    return 0;
}
 // this doesnt work - did you even look at the task
 // there is already a sample where this would fail and get stuck in an
 // infinite loop
 else if (n == 4 or n == 0) {
    cout<< ":(";
    return 0;
 }
}

  return 0;
 }

// anyways nice try
