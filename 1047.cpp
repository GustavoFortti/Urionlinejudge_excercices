#include <iostream>
using namespace std;

#define double long double

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    a = a * 60 + b;
    c = c * 60 + d;
    
    int time = 0;
    if(c >= a){
        time = (a - c) < 0 ? (a - c) * (-1) : a - c > 0 ? a - c : 24 * 60 ;
    }
    else{
        time = ((a - (24 * 60)) - c) * (-1);
    }

    int hora = (time / 60);
    int min = (time % 60);

    cout << "O JOGO DUROU " << hora << " HORA(S) E " << min << " MINUTO(S)" << endl;

    return 0;
}