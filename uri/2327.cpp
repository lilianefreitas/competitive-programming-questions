#include <bits/stdc++.h>
using namespace std;

const int N = 15;

// apresentando as variáveis
int n, v[N][N], soma;
bool deuerrado = false;

int main () {
    scanf("%d", &n);

    // pegando cada valor da matriz
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &v[i][j]);

            if (i == 1) {
                soma += v[i][j]; 
            }
        }
    }

    // verificando as linhas 
    for (int i = 1; i <= n; i++) {
        
        // fixado a linha i, vou fazer o seguinte:
        int somalinha = 0;
        for (int j = 1; j <= n; j++) {
            somalinha += v[i][j];
        }

        if (somalinha != soma) {
            deuerrado = true;
        }
    }

    // verificando as colunas 
    for (int j = 1; j <= n; j++) {
        
        // fixado a coluna j, vou fazer o seguinte:
        int somacoluna = 0;
        for (int i = 1; i <= n; i++) {
            somacoluna += v[i][j];
        }

        if (somacoluna != soma) {
            deuerrado = true;
        }
    }
    
    // verificando a diagonal principal
    int somadiagonalprincipal = 0; 

    for (int i = 1; i <= n; i++) {
        somadiagonalprincipal += v[i][i];
    }

    if (somadiagonalprincipal != soma) {
        deuerrado = true;
    } 

    // verificando a diagonal secundária
    int somadiagonalsecundaria = 0; 

    for (int i = 1; i <= n; i++) {
        somadiagonalsecundaria += v[i][n-i+1];
    }

    if (somadiagonalsecundaria != soma) {
        deuerrado = true;
    }

    // vendo se alguma soma não é igual
    if (deuerrado == true) {
        printf("-1\n");

    } else {
        printf("%d\n", soma);

    }

    return 0;
}
