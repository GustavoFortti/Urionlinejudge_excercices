#include <iostream>
#include <string.h>

using namespace std;

#define double long double

int main()
{
    char a[15], b[15], c[15];
    cin >> a >> b >> c;

    if (!strcmp(a ,"vertebrado")) {
        if (!strcmp(b ,"ave")) {
            if (!strcmp(c ,"carnivoro")) {
                cout << "aguia\n";
            } else {
                cout << "pomba\n";
            }
        } else {
            if (!strcmp(c ,"onivoro")) {
                cout << "homem\n";
            } else {
                cout << "vaca\n";
            }
        }
    } else {
        if (!strcmp(b ,"inseto")) {
            if (!strcmp(c ,"hematofago")) {
                cout << "pulga\n";
            } else {
                cout << "lagarta\n";
            }
        } else {
            if (!strcmp(c ,"hematofago")) {
                cout << "sanguessuga\n";
            } else {
                cout << "minhoca\n";
            }
        }
    }

    return 0;
}