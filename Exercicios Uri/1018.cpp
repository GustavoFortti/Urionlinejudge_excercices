#include <iostream>
#define size 7

using namespace std;

int main()
{
    int cash = 0, x = 0;
    int value[size] = {1, 2, 5, 10, 20, 50, 100};

    cin >> cash;
    cout << cash << endl;
    for (int i = 0; i < 7; i++)
    {
        if (cash >= value[size - 1 - i])
        {
            x = cash / value[size - 1 - i];
            cash = cash - (x * value[size - 1 - i]);
        }
        cout << x << " nota(s) de R$ " << value[size - 1 - i] << ",00" << endl;
        x = 0;
    }
    return 0;
}