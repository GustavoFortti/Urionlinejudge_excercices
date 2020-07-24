#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;


    double tri = (a * c) / 2.0;
    double cir = 3.14159 * pow(c, 2);
    double tra = ((a + b) * c) / 2;
    double qua = b * b;
    double ret = a * b;

    cout << fixed;
    cout.precision(3);
    
    cout << "TRIANGULO: "  << tri << endl;
    cout << "CIRCULO: "    << cir << endl;
    cout << "TRAPEZIO: "   << tra << endl;
    cout << "QUADRADO: "   << qua << endl;
    cout << "RETANGULO: "  << ret << endl;

    return 0;
}
