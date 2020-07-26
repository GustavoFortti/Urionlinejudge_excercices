#include <iostream>
using namespace std;

#define double long double

int main()
{
    double sal;
    cin >> sal;
    cout << fixed;
    cout.precision(2);
    double percent = sal <= 400 ? 15 : sal <= 800 ? 12 : sal <= 1200 ? 10 : sal <= 2000 ? 7  : 4;
    cout << "Novo salario: " << sal * ((percent / 100) + 1) << endl;
    cout << "Reajuste ganho: " << sal * (percent / 100) << endl;
    cout.precision(0);
    cout << "Em percentual: " << percent << " %" << endl;

    return 0;
}