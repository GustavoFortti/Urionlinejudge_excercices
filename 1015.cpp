#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x1, x2, y1, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    double dis = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));

    cout << fixed;
    cout.precision(4);

    cout << dis << endl;

    return 0;
}