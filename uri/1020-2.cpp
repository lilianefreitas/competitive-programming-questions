#include <bits/stdc++.h>
using namespace std;

int idadedias;

int main() {
    scanf("%d", &idadedias);

    int ano = idadedias / 365;
    int mes = (idadedias % 365) / 30;
    int dias = (idadedias % 365) % 30;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dias);

    return 0;
}
