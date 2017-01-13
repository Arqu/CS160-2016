#include <iostream>

using namespace std;


bool isPrime(int x){
    for(int i = 2; i < x; i++){
        if(x % i == 0) return false;
    }
    return (x == 1) ? false : true;
}

int main(){
    int x = 3;

    if(isPrime(x)) cout << "Broj je prost" << endl;
    else cout << "Broj nije prost" << endl;


    return 0;
}
