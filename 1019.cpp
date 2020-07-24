#include <iostream>

using namespace std;

int main()
{
    int time = 0;
    int v[3];

    cin >> time;

    v[0] = time / 60;
    v[1] = v[0] / 60;
    v[0] = v[0] - (v[1] * 60);
    v[2] = (time % 60) ;

    cout << v[1] << ":" << v[0] << ":" << v[2] << endl;   

    return 0;
}