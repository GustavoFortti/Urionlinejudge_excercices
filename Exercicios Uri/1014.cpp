#include <iostream>

using namespace std;

int main()
{
    int km = 0;
    double lit = 0;

    cin >> km >> lit;

    cout << fixed;
    cout.precision(3);

    cout << km / lit << " km/l" << endl;
    return 0;
}