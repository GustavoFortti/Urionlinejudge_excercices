#include <bits/stdc++.h>
using namespace std;

#define double long double

int32_t main(){
    double v[3];
    cin >> v[0] >> v[1] >> v[2];

    bool trocou = true;
    for(;trocou;){
        trocou = false;
        for(int j = 0; j < 3; j++){
            if(v[j] < v[j + 1]){
                double aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                trocou = true;
            }
        }
    }


    if(v[0] >= (v[1] + v[2])) cout << "NAO FORMA TRIANGULO" << endl;
    else if((pow(v[1], 2) + pow(v[2], 2)) == pow(v[0], 2)) cout << "TRIANGULO RETANGULO" << endl;
    else if((pow(v[1], 2) + pow(v[2], 2)) < pow(v[0], 2)) cout << "TRIANGULO OBTUSANGULO" << endl;
    else if((pow(v[1], 2) + pow(v[2], 2)) > pow(v[0], 2)) cout << "TRIANGULO ACUTANGULO" << endl;
    if(v[1] == v[2] && v[2] == v[0]) cout << "TRIANGULO EQUILATERO" << endl;
    if((v[1] == v[2] && v[2] != v[0]) || (v[1] != v[2] && v[2] == v[0]) || (v[0] == v[1] && v[0] != v[2])) cout << "TRIANGULO ISOSCELES" << endl;
    

    return 0;
}