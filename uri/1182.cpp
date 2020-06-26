#include <bits/stdc++.h>
using namespace std;

const int N = 20;

// declarando as variáveis 
int l, n = 12;
double m[N][N], somacoluna;
char c;

int main () {

    // pegando as entradas
    scanf(" %d", &l);
    scanf(" %c", &c);

    // pegando os elementos da matriz
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){

            scanf("%lf", &m[i][j]);
            
            // se a coluna j for igual l, somar esse elemento
            if (j == l) {
                somacoluna += m[i][j];
            }
        }
    }
        
    double resultado;
    
    // verificando se a entrada é soma ou média 
    if (c == 'S'){
        resultado = somacoluna;

    } else {
        resultado = somacoluna / 12;

    }

    // apresentando o resultado
    printf("%.1lf\n", resultado);

    return 0;
}
