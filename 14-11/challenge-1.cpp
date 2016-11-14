#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cctype>


 using namespace std;

 int main()
 {
int n;
int sum = 0;
cin>>n;
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
 n = sum + n;
if (n == 1) {
    cout<< ":)";
    return 0;
}
 else if (n == 4 or n == 0) {
    cout<< ":(";
    return 0;
 }
}

  return 0;
 }
