#include <bits/stdc++.h>
using namespace std;

int n;

int main () {

    // pegando cada numero da entrada enquanto tiver 
    while(~scanf("%d", &n)){
        
        // imprimindo a matriz
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {

                // definindo o elemento
                int elemento;

                // se o elemento for da diagonal secundária...
                // colocando ele em cima devido a prioridade da questão
                if (i == n-j+1) {
                    elemento = 2;
                
                // se o elemento for da diagonal principal...
                } else if (j == i) {
                    elemento = 1;
                
                // se elemento não for da diagonal princ. ou secund.
                } else {
                    elemento = 3;

                }
                
                // imprimindo cada elemento da matriz
                printf("%d", elemento);
            }
            
            // dando enter depois de cada linha 
            printf("\n");
        }
    }
                
    return 0;
}
