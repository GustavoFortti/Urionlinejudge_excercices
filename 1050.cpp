#include <iostream>
using namespace std;

#define double long double

int main()
{
    char ddd[8][25] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};
    int id[8] = {61, 71, 11, 21, 32, 19, 27, 31};

    int value;
    cin >> value;

    int i;
    for (i = 0; i < 8; i++)
    {
        if (id[i] == value) 
        {
            cout << ddd[i] << endl;
            break;
        }
    }
    if (i == 8) cout << "DDD nao cadastrado" << endl;

    return 0;
}