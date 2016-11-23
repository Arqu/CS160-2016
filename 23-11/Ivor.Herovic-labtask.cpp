#include <iostream>

using namespace std;

int main(){
unsigned long long factorial = 1;
double sum = 0;
int n;

cin >> n;
for(int i = 1; i <= n; i++ ) {
factorial *= i;
}
cout << factorial << endl;

 while (factorial != 0)
 {
     sum += (factorial % 10);
     factorial /= 10;
 }
 factorial += sum;
 cout<< factorial;

return 0;
}
