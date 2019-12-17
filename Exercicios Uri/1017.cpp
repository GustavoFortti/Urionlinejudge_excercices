#include <iostream>

using namespace std;

int main()
{
    int t = 0, vm = 0;

    cin >> t >> vm;

    cout << fixed;
    cout.precision(3);

    double x = ( t * vm ) / 12.0;

    cout << x << endl;

    return 0;
}