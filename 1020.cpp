#include <iostream>

using namespace std;

int main()
{
    int x;
    int v[3];
    cin >> x;

    v[0] = x / 365;
    v[1] = (x % 365) / 30;
    v[2] = x - ((v[0] * 365) + (v[1] * 30));

    cout << v[0] << " ano(s)" << endl;
    cout << v[1] << " mes(es)" << endl;
    cout << v[2] << " dia(s)" << endl;
    
    return 0;
}