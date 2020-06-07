#include <bits/stdc++.h>
using namespace std;

const int N = 20;

// declarando as variáveis 
int l, n = 12;
double m[N][N], somalinha;
char c;

int main () {
    
    // pegando as duas primeiras linhas da entrada
    scanf("%d", &l);
    scanf(" %c", &c);

    // pegando os elementos da matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
            scanf("%lf", &m[i][j]);

            // somando os elementos da linha proposta
            if (i == l) {
                somalinha += m[i][j];
            }
        }
    }

    double resultado;
    
    // verificando se a entrada é soma ou média 
    if (c == 'S') {
        resultado = somalinha;

    } else {
        resultado = somalinha / 12;
    }
    
    // apresentando o resultado
    printf("%.1lf\n", resultado);

    return 0;
}
