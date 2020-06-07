#include <bits/stdc++.h>
using namespace std;

// declarando as variáveis
int n, x, posicao, menor = INT_MAX;

int main () {
    scanf("%d", &n);

    // pegando todos os valores do vetor 
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);

       // verificando se esse num é o menor e qual é sua posicao
        if (x < menor) {
            menor = x;
            posicao = i;
        }
    }

    // resultado 
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
