#include <bits/stdc++.h>
using namespace std;

int n;

int main () {
    
    // definindo que o programa sempre entre aqui
    while(1) {
        scanf("%d", &n);         
        
        // se n for 0, parar o programa 
        if (n == 0) {
            break;
        }

        // imprimindo a matriz [n][n]
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                
                // calculando o valor de cada elemento da matriz 
                int resultado = min({i, j, n-i+1, n-j+1});
                
                // imprimindo o resultado do elemento
                printf("%3d", resultado);
                
                // imprimindo o espaço quando não é o último elemento
                if(j != n){
                    printf(" ");
                }
            }
            // imprimindo o enter de cada linha 
            printf("\n");
        }

        // imprimindo a linha em branco depois de cada caso 
        printf("\n");
    }

    return 0;
}
