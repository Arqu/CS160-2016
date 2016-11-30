#include <iostream>
#include <cmath>
#include <string>

using namespace std;


string printRow(int n, int i){
    int max_h = ((sin(90 * 3.14 / 180) + cos(90 * 3.14 / 180)) + 2) * 10;
    string sinusoide = "";
    for(int j = 1; j <= n; j++){
        int x = (sin(15 * j * 3.14/180) + 2) * 10;
        if(x >= max_h - i){
            sinusoide += "#";
        }else{
            sinusoide += " ";
        }
    }
    return sinusoide;

}


int main(){

    int n;
    cin >> n;

    int max_h = ((sin(90 * 3.14 / 180) + cos(90 * 3.14 / 180)) + 2) * 10;
    for(int i = 0; i < max_h; i++){
        cout << printRow(n, i);
        cout << endl;
    }

    return 0;
}
