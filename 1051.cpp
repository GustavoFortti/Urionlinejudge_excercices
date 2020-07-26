#include <iostream>
using namespace std;

#define double long double

int main()
{
    double cash, taxa = 0;
    cin >> cash;

    cout << fixed;
    cout.precision(2);
    if (cash > 2000)
    {
        if (cash > 3000)
        {
            if (cash > 4500)
            {
                taxa += (cash - 4500) * 0.28;
                cash = 4500;
            }
            taxa += (cash - 3000) * 0.18;
            cash = 3000;
        }
        taxa += (cash - 2000) * 0.08;
        cout << "R$ " << taxa << endl;
    }
    else
    {
        cout << "Isento" << endl;
    }

    return 0;
}