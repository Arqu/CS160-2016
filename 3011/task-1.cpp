#include <iostream>
#include <cmath>

using namespace std;

string funct (int s)
{
    string d = "";
    for (int j = 0; j < s; j++)
    {
        d = d + "#";
    }
    return d;
}

int main()
{
	int n;
	cout << "enter n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
    {
		int x = ((sin(15 * i * 3.14 / 180) + cos(15 * i * 3.14 / 180)) + 2) * 10;
		cout << funct(x) << endl;
    }

	return (0);
}
