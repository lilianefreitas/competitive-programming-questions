#include <bits/stdc++.h>
using namespace std;

// declarando as variáveis
int x, a, b; 
int pares[10], impares[10];

int main () {
    
    // pegando os valores 
    for (int i = 0; i < 15; i++){
        scanf("%d", &x);

        // separando os valores em par e impar
        if (x % 2 == 0) {
            pares[a] = x;
            a++;

        } else {
            impares[b] = x;
            b++;
        }

        // se o vetor encher, imprimir o vetor inteiro 
        // e esvaziar para os próximos números 
        if (a == 5){
            for(int j = 0; j < 5; j++){
                printf("par[%d] = %d\n", j, pares[j]);
            }

            a = 0;
        }

        if (b == 5) {
            for (int j = 0; j < 5; j++){
                printf("impar[%d] = %d\n", j, impares[j]);
            }

            b = 0;
        }
    }
    
    // imprimindo os números que sobraram nos vetores
    for (int i = 0; i < b; i++) {
        printf("impar[%d] = %d\n", i, impares[i]);
    }

    for (int i = 0; i < a; i++) {
        printf("par[%d] = %d\n", i, pares[i]);

    }

    return 0;
}
