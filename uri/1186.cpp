#include <bits/stdc++.h>
using namespace std;

const int N = 12;

// apresentando as variáveis
int n = 12;
double m[N][N], somaarea;
char c;

int main () {

    // pegando o caractere
    scanf(" %c", &c);

    // preenchendo a matriz
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){

            scanf("%lf", &m[i][j]);

            // se o numero estiver abaixo da dig. secundária
            if ((i + j) > 11) {
                somaarea += m[i][j];

            }
        }
    }

    // Se S, imprimir a soma. Se M, imprimir a média. 
    double resultado;

    if (c == 'S'){
        resultado = somaarea;

    } else {
        resultado = somaarea / 66;

    }

    printf("%.1lf\n", resultado);

    return 0;
}

