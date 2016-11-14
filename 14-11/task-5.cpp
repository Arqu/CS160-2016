#include <iostream>
using namespace std;

int main()
{
    /*  Well done, but as you comented yourself, we could reuse some of the variables
        For reading the values you only need one and the rest can be reused.
        If you use for loops you can make it a bit cleaner as well.
        some pseudo code
        num a, min, max;
        input a;
        min = a;
        max = a;
        input a;
        if a < min then min = a;
        if a > max then max = a;
        input a;
        if a < min then min = a;
        if a > max then max = a;
        input a;
        if a < min then min = a;
        if a > max then max = a;
        print min
        print max
        
        Also you didn't respect the output format here, while in general I'm fine with it
        you should conform to it as it will be automatically graded later on.
        
        Also an improvement over the first version is the for loops
        
        num a,min, max;
        for num x=0;x<4;x++
            read a
            if x == 0 then
                min = a;
                max = a;
            else
              if a < min then min = a;
              if a > max then max = a;  
              
         a great reason for this would be the ability to scale this beyond 4 numbers, if you replace 4 with some n
         that n can dictate how many numbers we check.
    */
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
