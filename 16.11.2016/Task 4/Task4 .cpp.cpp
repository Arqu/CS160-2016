#include <iostream>

using namespace std;

int main (){

int number;
cout << "Enter a number "<< endl;
cin >> number;
if (number >= 0){
    cout << "Number is " << number << endl;
}else {
    cout << "Number is " << -number << endl;
}

return 0;
}
