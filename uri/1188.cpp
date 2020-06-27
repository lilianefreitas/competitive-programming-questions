#include <bits/stdc++.h>
using namespace std;

const int N = 12;

int n = 12;
double m[N][N], somaarea;
char c;

int main () {

    scanf(" %c", &c);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            scanf("%lf", &m[i][j]);

            if (((i + j) > 11) and (i > j)){
                somaarea += m[i][j];

            }
        }
    }

    double resultado;

    if (c == 'S'){
        resultado = somaarea;

    } else {
        resultado = somaarea / 30;

    }

    printf("%.1lf\n", resultado);

    return 0;
}
