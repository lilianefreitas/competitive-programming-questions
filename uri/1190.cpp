#include <bits/stdc++.h>
using namespace std;

// declarando as variáveis
int n = 12;
double x, soma;
char c;

int main () {
    // pegando o caractere 
    scanf("%c", &c);
    
    // pegando os valores da matriz
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
         scanf("%lf", &x);
        
         // somar os valores em dadas condições: 

         // acima da diagonal princ. e abaixo da diagonal secund.
         if (j > i and j > n-i+1) {
             soma += x;
         } 
        }
    }

        // se o caractere for S, imprime a soma dos valores
        if (c == 'S') {
            printf("%.1lf\n", soma);

        // senão, imprimir a média
        } else {
            printf("%.1lf\n", soma/30);

        }

    return 0;
}
