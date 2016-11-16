#include <iostream>

using namespace std;

int main(){
    int n;
    int sum = 0;
    int prod = 1;

    cin >> n;


    for(int i = 1; i <= n; i++){
        int num;
        cin >> num;

        sum += num;
        prod *= num;
    }
    cout << "sum: " << sum << endl;
    cout << "prod: " << prod << endl;
    cout << "avg: " << static_cast<double>(sum) / n << endl;

    return 0;
}
