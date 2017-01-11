#include <iostream>


using namespace std;

int main(){

    /*
                *******
               *       *
              *         *
             *           *
            *             *       n = 9;
             *           *        top_bottom = n - 2;
              *         *         afterspace = top_bottom
               *       *
                *******
    */
    int n;
    cin >> n;
    int beforespace = n / 2;

    for(int i = 0; i < beforespace; i++) cout << " ";
    for(int i = 0; i < n - 2; i++) cout << "*";
    beforespace--;
    int afterspace = n - 2;
    cout << endl;
    for(int i = 1; i <= (n / 2) ; i++){
        for(int j = 0; j < beforespace; j++) cout << " ";
        cout << "*";
        for(int j = 0; j < afterspace; j++) cout << " ";
        cout << "*" << endl;

        afterspace+= 2;
        beforespace--;
    }
    beforespace = 1;
    afterspace -= 4;
    for(int i = 2; i <= (n / 2); i++){
        for(int j = 0; j < beforespace; j++) cout << " ";
        cout << "*";
        for(int j = 0; j < afterspace; j++) cout << " ";
        cout << "*" << endl;

        afterspace-= 2;
        beforespace++;
    }
    for(int i = 0; i < beforespace; i++) cout << " ";
    for(int i = 0; i < n - 2; i++) cout << "*";

    return 0;
}
