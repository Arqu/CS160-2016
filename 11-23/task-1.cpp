#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int numberoftaraba = (sin(15 * i * 3.14/180) + 2) * 10;
        for(int j = 1; j <= numberoftaraba; j++)
            cout << "#";
        cout << endl;

    }




}
