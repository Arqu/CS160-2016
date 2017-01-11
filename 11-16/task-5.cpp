#include <iostream>

using namespace std;

int main(){
    int maximum = 0;
    int minimum = 0;

    int n;

    for(int i = 0; i < 4; i++){
        cin >> n;
        if(i == 0){
            maximum = n;
            minimum = n;
        }
        if(n > maximum) maximum = n;
        if(n < minimum) minimum = n;
    }
    cout << maximum << endl;
    cout << minimum << endl;

    return 0;

}
