#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout<< "Input 4 integers \n";
    cin >> a >> b >> c >> d;
    int minimum = a;
    int maximum = a;
    if (b > a) maximum = b;
    else minimum = b;
    if(c > maximum) maximum = c;
    else if (c < minimum) minimum = c;
    if (d > maximum) maximum = d;
    else if (d < minimum) minimum = d;

    cout <<"Maximum number is "<< maximum << endl;
    cout << "Minimum number is "<< minimum << endl;


    return 0;
}
