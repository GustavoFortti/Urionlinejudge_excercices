#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double volume = 0;
    double R3 = 0;

    cin >> R3;

    volume = (4.0/3.0) * 3.14159 * pow(R3,3);

    cout << fixed;
    cout.precision(3);

    cout << "VOLUME = " << volume << endl;
    return 0;
}
